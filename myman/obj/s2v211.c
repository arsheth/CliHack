int maze_n = 1;
int maze_w = 15;
int maze_h = 9;
int maze_flags = 0;
const char *maze_args = "GHOSTS=1 RHERO=7.5 RFRUIT=7.5 RGHOST=5.5 RTOP=2.5 RMSG=8 CMSG=2 RMSG2=0 CMSG2=2 READY=\"   READY!  \" PLAYER1=\" PLAYER ONE\" PLAYER2=\" PLAYER TWO\" GAMEOVER=\" GAME OVER \" ABOUT=\"Inspired by Art\'s \'Pointless Pacman\'\"";
static const char builtin_mazefile_str[] = "lvl/nopoint.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\360\360\360\315\315\315\273\371\272\272"
  "\272\371\272         \272\371\272\272"
  "\272\371\272         \272\371\272\272"
  "\272\371\272         \272\371\272\272"
  "\272\371\310\315\315\315\315\315\315\315\315\315\274\371\272\272"
  "\272\371\371\371\371\371\371 \371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;