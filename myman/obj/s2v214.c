int maze_n = 3;
int maze_w = 19;
int maze_h = 15;
int maze_flags = 0;
const char *maze_args = "RGHOST=9.5 RTOP=9.5 GHOSTS=3 ROGHOST=0 COGHOST=0 RHERO=13.5 RFRUIT=11.5 MORTAR_COLORS=\"\\x05\" DOT_COLORS=\"\\x0F\" PELLET_COLORS=\"\\x03\" RMSG=10 CMSG=7 RMSG2=8 CMSG2=7 READY=\"READY\" PLAYER1=\"P ONE\" PLAYER2=\"P TWO\" GAMEOVER=\" BYE \" ABOUT=\"Inspired by Philips/Magnavox\'s \'KC Munchkin\'\" FIXME=\"this is really nothing like the original: no moving dots, no random mazes, too many dots, no rotating ghost pen, and no disappearing mazes\"";
static const char builtin_mazefile_str[] = "lvl/kcm.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\313\315\315\315\313\315\315\315\313\315\315\315\315\315\273\273"
  "\272\371 \371\272\371 \371\272\371 \371\272\371 \371 \371\272\272"
  "\272 \306\315\274 \322 \320 \311\315\274 \306\315\265 \272\272"
  "\272\376 \371 \371\272\371 \371\272\371 \371 \371 \376\272\272"
  "\272 \306\315\273 \310\315\265 \320 \311\315\265 \306\315\271\271"
  "\272\371 \371\272\371 \371 \371 \371\272\371 \371 \371\272\272"
  "\314\315\265 \320 \311\315\265 \306\315\274 \311\315\265 \272\272"
  "\272\371 \371 \371\272\371 \371 \371 \371\272\371 \371\272\272"
  "\312\315\265 \306\315\274 \322 \322 \306\315\274 \306\315\312\312"
  "   \371 \371 \371\272 \272\371 \371 \371    "
  "\313\315\273 \306\315\273 \310\315\274 \311\315\265 \306\315\313\313"
  "\272\376\272\371 \371\272\371 \371 \371\272\371 \371 \376\272\272"
  "\272 \320 \322 \310\315\315\315\315\315\274 \311\315\265 \272\272"
  "\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\272"
  "\310\315\315\315\312\315\315\315\315\315\315\315\315\315\312\315\315\315\274\274"
/* 0x1 */
  "\311\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371 \371 \371 \371\272\371 \371 \371 \371 \371\272\272"
  "\272 \306\315\265 \322 \320 \306\315\265 \306\315\265 \272\272"
  "\272\376 \371 \371\272\371 \371 \371 \371 \371 \376\272\272"
  "\272 \322 \322 \320 \306\315\313\315\265 \322 \322 \272\272"
  "\272\371\272\371\272\371 \371 \371\272\371 \371\272\371\272\371\272\272"
  "\272 \320 \314\315\265 \007 \320 \306\315\271 \320 \272\272"
  "\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\272"
  "\312\315\265 \320 \322 \311\315\273 \322 \320 \306\315\312\312"
  "   \371 \371\272\371\272 \272\371\272\371 \371    "
  "\313\315\265 \322 \320 \320 \320 \320 \322 \306\315\313\313"
  "\272\376 \371\272\371 \371 \371 \371 \371\272\371 \376\272\272"
  "\272 \306\315\274 \322 \306\315\273 \306\315\312\315\265 \272\272"
  "\272\371 \371 \371\272\371  \272\371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\312\315\315\315\312\315\315\315\315\315\315\315\274\274"
/* 0x2 */
  "\311\315\313\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\273\273"
  "\272\371\272\371 \371 \371 \371\272\371 \371 \371 \371\272\272"
  "\272 \310\315\315\315\315\315\265 \272 \306\315\273 \306\315\271\271"
  "\272\376 \371 \371 \371 \371\272\371 \371\272\371 \376\272\272"
  "\272 \322 \306\315\273 \306\315\271 \322 \320 \322 \272\272"
  "\272\371\272\371 \371\272\371 \371\272\371\272\371 \371\272\371\272\272"
  "\272 \310\315\265 \320 \322 \314\315\274 \322 \320 \272\272"
  "\272\371 \371 \371 \371\272\371\272\371 \371\272\371 \371\272\272"
  "\312\315\265 \311\315\315\315\271 \272 \311\315\312\315\315\315\312\312"
  "   \371\272\371 \371\272 \272\371\272\371 \371    "
  "\313\315\315\315\274 \322 \272 \310\315\274 \322 \306\315\313\313"
  "\272\371 \371 \371\272\371\272\371 \371 \371\272\371 \371\272\272"
  "\272 \306\315\265 \320 \272 \306\315\265 \310\315\265 \272\272"
  "\272\371 \371 \371 \371\272\371 \371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\312\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
