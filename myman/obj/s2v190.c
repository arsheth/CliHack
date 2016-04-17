int maze_n = 4;
int maze_w = 17;
int maze_h = 17;
int maze_flags = 0;
const char *maze_args = "RHERO=15.5 RGHOST=8.5 ROGHOST=0 COGHOST=1 RTOP=8.5 RFRUIT=10.5 RMSG=10 CMSG=6 RMSG2=6 CMSG2=6 READY=\"READY\" PLAYER1=\"P ONE\" PLAYER2=\"P TWO\" GAMEOVER=\"GONE.\" WALL_COLORS=\"\\x07\" MORTAR_COLORS=\"\\x04\" DOT_COLORS=\"\\x0E\" ABOUT=\"Inspired by shane@archadegames.com\'s \'Pac-Clone\' which is similar to Brian Postma\'s \'Java PacMan\'/\'PacMan 3D\'\"";
static const char builtin_mazefile_str[] = "lvl/pacclone.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\313\313\315\315\315\313\313\315\315\315\315\273\273"
  "\272\371\371\371\371\310\274\371\371\371\310\274\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\007\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\306\273\371\371\371\311\265\371\371\371\371\272\272"
  "\272\371\311\273\371\371\272 \322 \272\371\371\311\273\371\272\272"
  "\274\371\310\312\265\371\320 \272 \320\371\306\312\274\371\310\310"
  " \371\371\371\371\371  \272  \371\371\371\371\371  "
  "\315\273\371\322\371\322 \306\312\265 \322\371\322\371\311\315\315"
  " \272\371\272\371\272 \377 \377 \272\371\272\371\272  "
  "\315\274\371\320\371\320 \306\315\265 \320\371\320\371\310\315\315"
  " \371\371\371\371       \371\371\371\371  "
  "\273\371\311\315\315\273 \007 \007 \311\315\315\273\371\311\311"
  "\272\371\310\315\315\271\371\371\371\371\371\314\315\315\274\371\272\272"
  "\272\371\371\371\371\320\371\306\313\265\371\320\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\320\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\311\273\371 \371\311\273\371\371\371\371\272\272"
  "\310\315\315\315\315\312\312\315\315\315\312\312\315\315\315\315\274\274"
/* 0x1 */
  "\311\315\315\315\315\313\313\315\315\315\313\313\315\315\315\315\273\273"
  "\272\371\371\371\371\310\274\371\371\371\310\274\371\371\371\371\272\272"
  "\272\376\311\273\371\371\371\371\007\371\371\371\371\311\273\376\272\272"
  "\272\371\310\274\371\306\265\371\371\371\306\265\371\310\274\371\272\272"
  "\272\371\371\371\371\371\371\371\322\371\371\371\371\371\371\371\272\272"
  "\274\371\007\371\311\313\265 \320 \306\313\273\371\007\371\310\310"
  " \371\371\371\272\272     \272\272\371\371\371  "
  "\315\273\371\306\312\271 \306\315\265 \314\312\265\371\311\315\315"
  " \272\371\371\371\272 \377 \377 \272\371\371\371\272  "
  "\315\274\371\322\371\320 \306\315\265 \320\371\322\371\310\315\315"
  " \371\371\272\371\371     \371\371\272\371\371  "
  "\273\371\311\316\265\371\322 \007 \322\371\306\316\273\371\311\311"
  "\272\371\310\274\371\371\272\371\371\371\272\371\371\310\274\371\272\272"
  "\272\371\371\371\371\306\274\371\322\371\310\265\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\320\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\311\273\371 \371\311\273\371\371\371\371\272\272"
  "\310\315\315\315\315\312\312\315\315\315\312\312\315\315\315\315\274\274"
/* 0x2 */
  "\311\315\315\315\315\313\313\315\315\315\313\313\315\315\315\315\273\273"
  "\272\371\371\371\371\310\274\371\371\371\310\274\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\322\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\322\371\306\312\265\371\322\371\371\371\371\272\272"
  "\272\371\322\371\311\271\371\371\371\371\371\314\273\371\322\371\272\272"
  "\274\371\320\371\310\274 \306\315\265 \310\274\371\320\371\310\310"
  " \371\371\371         \371\371\371  "
  "\315\273\371\322 \007 \306\315\265 \007 \322\371\311\315\315"
  " \272\371\272   \377 \377   \272\371\272  "
  "\315\274\371\314\313\265 \306\315\265 \306\313\271\371\310\315\315"
  " \371\371\272\272       \272\272\371\371  "
  "\273\371\311\316\274 \322 \322 \322 \310\316\273\371\311\311"
  "\272\371\310\274  \272 \320 \272  \310\274\371\272\272"
  "\272\371\371\371\371\306\274\371\371\371\310\265\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\007\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\311\273\371 \371\311\273\371\371\371\371\272\272"
  "\310\315\315\315\315\312\312\315\315\315\312\312\315\315\315\315\274\274"
/* 0x3 */
  "\311\315\315\315\315\313\313\315\315\315\313\313\315\315\315\315\273\273"
  "\272\371\371\371\371\310\274\371\371\371\310\274\371\371\371\371\272\272"
  "\272\376\311\273\371\371\371\371\322\371\371\371\371\311\273\376\272\272"
  "\272\371\310\274\371\322\371\306\312\265\371\322\371\310\274\371\272\272"
  "\272\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\272\272"
  "\274\371\306\265\371\320 \306\315\265 \320\371\306\265\371\310\310"
  " \371\371\371\371       \371\371\371\371  "
  "\315\273\371\007\371\322 \306\315\265 \322\371\007\371\311\315\315"
  " \272\371\371\371\272 \377 \377 \272\371\371\371\272  "
  "\315\274\371\322\371\320 \306\315\265 \320\371\322\371\310\315\315"
  " \371\371\272\371\371     \371\371\272\371\371  "
  "\273\371\311\316\265\371\322 \322 \322\371\306\316\273\371\311\311"
  "\272\371\310\274\371\371\272 \320 \272\371\371\310\274\371\272\272"
  "\272\371\371\371\371\306\274\371\371\371\310\265\371\371\371\371\272\272"
  "\272\376\306\265\371\371\371\371\007\371\371\371\371\306\265\376\272\272"
  "\272\371\371\371\371\311\273\371 \371\311\273\371\371\371\371\272\272"
  "\310\315\315\315\315\312\312\315\315\315\312\312\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;