int maze_n = 1;
int maze_w = 31;
int maze_h = 15;
int maze_flags = 0;
const char *maze_args = "READY=\"  READY! \" GAMEOVER=\"GAME OVER\" PLAYER1=\"PLAYER  1\" PLAYER2=\"PLAYER  2\" RGHOST=9.5 ROGHOST=0 RFRUIT=11.5 RTOP=8 RHERO=7.5 RMSG=14 CMSG=11 RMSG2=0 CMSG2=11 ABOUT=\"Inspired by a Pac-Man clone for the Nascom computer\"";
static const char builtin_mazefile_str[] = "lvl/nascom.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\0\0\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\0\0\0"
  "\0\0\272 \371 \371 \371\371\371\371\371 \371 \371 \371\371\371\371\371 \371 \371 \272\0\0\0"
  "\0\0\272\376\007\371\322\371\306\315\315\315\265\371\322\371\322\371\306\315\315\315\265\371\322\371\007\376\272\0\0\0"
  "\0\0\272 \371 \272 \371\371\371\371\371 \272\371\272 \371\371\371\371\371 \272 \371 \272\0\0\0"
  "\0\0\272\371\322\371\320\371\306\315\315\315\265\371\272\371\272\371\306\315\315\315\265\371\320\371\322\371\272\0\0\0"
  "\0\0\272\371\272 \371 \371\371\371\371\371 \272\371\272 \371\371\371\371\371 \371 \272\371\272\0\0\0"
  "\315\315\274\371\320\371\007\371\306\315\315\315\265\371\320\371\320\371\306\315\315\315\265\371\007\371\320\371\310\315\315\315"
  "  \371 \371 \371 \371\371\371 \371 \371 \371 \371 \371\371\371 \371 \371 \371   "
  "\315\315\273\371\311\315\315\315\315\315\265\371\311\315\315\360\315\315\273\371\306\315\315\315\315\315\273\371\311\315\315\315"
  "\0\0\272\371\272 \371 \371\371\371 \272     \272 \371\371\371 \371 \272\371\272\0\0\0"
  "\0\0\272\371\320\371\322\371\306\315\265\371\310\315\315\315\315\315\274\371\306\315\265\371\322\371\320\371\272\0\0\0"
  "\0\0\272 \371 \272 \371\371\371 \371 \371\371\371 \371 \371\371\371 \272 \371 \272\0\0\0"
  "\0\0\272\376\007\371\320\371\306\315\265\371\322\371\306\315\265\371\322\371\306\315\265\371\320\371\007\376\272\0\0\0"
  "\0\0\272 \371 \371 \371\371\371 \272 \371\371\371 \272 \371\371\371 \371 \371 \272\0\0\0"
  "\0\0\310\315\315\315\315\315\315\315\315\315\312\315\315\315\315\315\312\315\315\315\315\315\315\315\315\315\274\0\0\0"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
