#!/usr/bin/tmux source-file

tmux new-session -d

figlet TEST
sleep 2
cmatrix &
sleep 4
killall cmatrix inotifywait

#figlet -x -c TERMINAL
#figlet -x -c BY
#figlet -x -c "RISHI-ARPITA"
#figlet -x -c SHREYA
#sleep 3


tmux split-window -d -t 0 -h 
tmux split-window -d -t 0 -v
tmux split-window -d -t 2 -v -p 40
tmux split-window -d -t 3 -v -p 10
#tmux split-window -d -t 0 -v
#tmux split-window -d -t 2 -v

tmux send-keys -t 0 '~/myman/myman' enter
tmux send-keys -t 3 'sh newspot.sh' enter
tmux send-keys -t 4 './googleContacts.sh' enter
tmux send-keys -t 1 'youtube-dl http://www.youtube.com/watch?v=10r9ozshGVE -o - | mplayer -vo matrixview:cols=400:rows=320 -'
tmux send-keys -t 2 'alpine' enter
#tmux send-keys -t 2 'telnet towel.blinkenlights.nl' enter

#tmux send-keys -t 0 'echo' enter
#tmux send-keys -t 1 'htop' enter C-1
#tmux send-keys -t 2 'echo' enter C-1
#tmux send-keys -t 2 'echo' enter C-1
#tmux send-keys -t 3 'echo' enter C-1
#tmux send-keys -t 3 'echo' enter C-1
#tmux send-keys -t 3 'top' enter C-1

#tmux send-keys -t 4 'echo' enter C-1

tmux select-pane -t 0

tmux attach
