#!/bin/bash
names=()
while IFS= read -r line
do
	names+=("$line")
done < "bday.list"

#$IFS=$'\r\n' GLOBIGNORE='*' command eval  'name=($(cat bday.list))'
#read -p "enter the contact name from your contact list `echo $'\n> '`" name
for name in "${names[@]}"
do
	txt=$(/usr/local/bin/goobook dquery $name)
	tt=`echo $txt`
	bd=""
	num=""


	re="Phone: ([^\(]+)\("
	if [[ $tt =~ $re ]]; then num=${BASH_REMATCH[1]}; fi

	re="Birthday: ([^ ]+) "
	if [[ $tt =~ $re ]]; then bd=${BASH_REMATCH[1]}; fi

	#echo -e "birthday date\n"$bd
	td=$(date +"%Y-%m-%d")

	#echo $td
 
	IFS='-' read -ra arr1 <<< "$bd"
	IFS='-' read -ra arr2 <<< "$td"

	if [ "${#arr1}" != "0" ]; then 
		if [ "${arr1[1]}" == "${arr2[1]}" ]; then
			if [ "${arr1[2]}" == "${arr2[2]}" ]; then

				number=$(echo $num|tr -d ' ')
				message="Happy Birthday "$name
        			echo $message | ./twilio-sms.sh -c config $number
				#echo $message
				echo "Bday Msg sent to "$name
			fi
		fi
	fi

	
   	#read -p "Do you want to send Bday message [y/n] ?`echo $'\n> '`" yn
    	#case $yn in
done
