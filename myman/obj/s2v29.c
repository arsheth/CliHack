int maze_n = 1;
int maze_w = 23;
int maze_h = 17;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\"GOODBYE\" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=7.5 ROGHOST=1 COGHOST=0.5 RFRUIT=9.5 RTOP=5.5 RHERO=13.5 RMSG=8 CMSG=8 RMSG2=6 CMSG2=8 ABOUT=\"Inspired by Atari\'s 2600 game called \\\"Pac-Man\\\"\" FIXME=\"The original maze has layout irregularities that are not accurately representable in MyMan\'s maze format at present.\"";
static const char builtin_mazefile_str[] = "lvl/pac2600.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\313\315\274 \310\315\313\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371 \272\371 \371 \371\272 \371\371\371\371\371\371\272\272"
  "\272\376\007 \322 \007 \320 \306\315\265 \320 \007 \322 \007\376\272\272"
  "\272\371\371\371\272 \371\371\371\371\371 \371\371\371\371\371 \272\371\371\371\272\272"
  "\314\265 \306\274 \306\315\273 \306\315\265 \311\315\265 \310\265 \306\271\271"
  "\272\371\371\371\371\371\371 \272\371 \371 \371\272 \371\371\371\371\371\371\272\272"
  "\272 \007 \322 \007 \320 \311\360\273 \320 \007 \322 \007 \272\272"
  "\272\371\371\371\272 \371\371\371\371\272 \272\371\371\371\371 \272\371\371\371\272\272"
  "\314\265 \306\274 \306\315\273 \310\315\274 \311\315\265 \310\265 \306\271\271"
  "\272\371\371\371\371\371\371 \272\371 \371 \371\272 \371\371\371\371\371\371\272\272"
  "\272 \007 \322 \007 \320 \306\315\265 \320 \007 \322 \007 \272\272"
  "\272\371\371\371\272 \371\371\371\371\371 \371\371\371\371\371 \272\371\371\371\272\272"
  "\314\265 \306\274 \306\315\273 \306\315\265 \311\315\265 \310\265 \306\271\271"
  "\272\371\371\371\371\371\371 \272\371 \371 \371\272 \371\371\371\371\371\371\272\272"
  "\272\376\007 \322 \007 \320 \306\315\265 \320 \007 \322 \007\376\272\272"
  "\272\371\371\371\272 \371\371\371\371\371 \371\371\371\371\371 \272\371\371\371\272\272"
  "\310\315\315\315\312\315\315\315\315\315\273 \311\315\315\315\315\315\312\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;