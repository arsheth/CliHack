#!/bin/bash

# Collect DBUS_SESSION_BUS_ADDRESS from running process
#function set_dbus_adress
SP_VERSION="0.1"
SP_DEST="org.mpris.MediaPlayer2.spotify"
SP_PATH="/org/mpris/MediaPlayer2"
SP_MEMB="org.mpris.MediaPlayer2.Player"

spotify_cmd() {
	dbus-send --print-reply --dest=org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.$1 1> /dev/null
}

spotify_query()
{
	qdbus org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.freedesktop.DBus.Properties.Get org.mpris.MediaPlayer2.Player PlaybackStatus
}

spotify_metadata() {
  # Prints the currently playing track in a parseable format.

  dbus-send                                                                   \
  --print-reply                                  `# We need the reply.`       \
  --dest=$SP_DEST                                                             \
  $SP_PATH                                                                    \
  org.freedesktop.DBus.Properties.Get                                         \
  string:"$SP_MEMB" string:'Metadata'                                         \
  | grep -Ev "^method"                           `# Ignore the first line.`   \
  | grep -Eo '("(.*)")|(\b[0-9][a-zA-Z0-9.]*\b)' `# Filter interesting fiels.`\
  | sed -E '2~2 a|'                              `# Mark odd fields.`         \
  | tr -d '\n'                                   `# Remove all newlines.`     \
  | sed -E 's/\|/\n/g'                           `# Restore newlines.`        \
  | sed -E 's/(xesam:)|(mpris:)//'               `# Remove ns prefixes.`      \
  | sed -E 's/^"//'                              `# Strip leading...`         \
  | sed -E 's/"$//'                              `# ...and trailing quotes.`  \
  | sed -E 's/"+/|/'                             `# Regard "" as seperator.`  \
  | sed -E 's/ +/ /g'                            `# Merge consecutive spaces.`
}

sp_current() {
  # Prints the currently playing track in a friendly format.
  require column

  spotify_metadata \
  | grep --color=never -E "(title)|(album)|(artist)" \
  | sed 's/^\(.\)/\U\1/' \
  | column -t -s'|'
}

# Count arguments, must be 1
#if [ "$#" -ne "1" ]
#then
#        echo -e "You must supply exactly one argument!\n"
#	#quit_message
#fi

# Check if DBUS_SESSION is set
if [ -z $DBUS_SESSION_BUS_ADDRESS ] 
	 then
	#echo "DBUS_SESSION_BUS_ADDRESS not set. Guessing."
	set_dbus_adress `whoami` spotify
fi

while true; do
    read -p "" mode
	case $mode in
        	play)
			spotify_cmd Play
			sp_current
                	;;
        	pause)
			spotify_cmd Pause
                	;;
        	playpause)
			spotify_cmd PlayPause
                	;;
        	next)
			spotify_cmd Next
			sp_current
                	;;
        	previous)
			spotify_cmd Previous
                	;;
        	stop)
			spotify_cmd Stop
			exit 0
                	;;
		playstatus)
			sp_current
			#spotify_query
			;;
        	*)
                	echo -e "Bad argument.\n"
                	#quit_message
                	;;
	esac
done
exit 0
