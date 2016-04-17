#!/bin/bash


read -p "enter the contact name from your contact list `echo $'\n> '`" name
txt=$(/usr/local/bin/goobook  dquery $name)

tt=`echo $txt`
echo $tt


#re="Phone: ([^(]+)"
#txt="------------------------- Arpita Sbu Phone: +1 347-891-7387 (mobile) Groups:"
#txt="Phone: +1 631-691-9590 (mobile)"

re="Phone: ([^\(]+)\("
if [[ $tt =~ $re ]]; then num=${BASH_REMATCH[1]}; fi

number=$(echo $num|tr -d ' ')
echo $number

while true; do
    read -p "Do you want to send message [y/n] ?`echo $'\n> '`" yn
    case $yn in
        [Yy]* ) read -p "please enter message : `echo $'\n> '`" message; echo $message | ./twilio-sms.sh -c config $number ;;
        [Nn]* ) exit;;
        * ) echo "Please answer yes or no.";;
    esac
done
