int maze_n = 1;
int maze_w = 27;
int maze_h = 15;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\" GONE  \" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=7.5 RFRUIT=7.5 RTOP=5.5 RHERO=9.5 RMSG=5 CMSG=10 RMSG2=5 CMSG2=10 ABOUT=\"Inspired by \'Munchkin\' (a text-mode game for HDOS)\" FIXME=\"ghosts get stuck near the upper-right corner\"";
static const char builtin_mazefile_str[] = "lvl/munchkin.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\273 \311\315\315\315\315\315\315\315\315\315\313\315\273\273"
  "\272\371 \376 \371 \371 \371 \371\272\371\272\371 \371 \371 \371 \371\272\371\272\272"
  "\272 \311\315\273 \311\315\315\315\273 \272 \310\315\265 \322 \306\315\313\315\274 \272\272"
  "\272\371\272\371\272\371\272\371 \371\272\371\272\371 \371 \371\272\371 \371\272\371 \376\272\272"
  "\272 \272 \320 \320 \306\315\274 \320 \306\315\315\315\312\315\265 \320 \322 \272\272"
  "\272\371\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\371\272\272"
  "\272 \310\315\315\315\265 \306\315\273 \306\315\265 \322 \306\315\315\315\273 \310\315\271\271"
  "\272\371 \371 \371 \371 \371\272\371 \371 \371\272\371 \371 \371\272\371 \371\272\272"
  "\272 \306\315\313\315\265 \322 \310\315\315\315\315\315\274 \322 \306\315\316\315\265 \272\272"
  "\272\371 \371\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\371 \371\272\272"
  "\314\315\315\315\274 \306\315\271 \311\315\273 \322 \322 \320 \322 \320 \322 \272\272"
  "\272\371 \371 \371 \371\272\371\272\371\272\371\272\371\272\371 \371\272\371 \371\272\376\272\272"
  "\272 \306\315\315\315\265 \320 \320 \272 \272 \320 \306\315\271 \306\315\274 \272\272"
  "\272\371 \376 \371 \371 \371 \371\272\371\272\371 \371 \371\272\371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\274 \310\315\315\315\315\315\312\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
