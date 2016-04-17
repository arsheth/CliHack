int maze_n = 1;
int maze_w = 31;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "RGHOST=11.5 ROGHOST=2 RFRUIT=13.5 RTOP=10.5 RHERO=17.5 WALL_COLORS=\"\\x09\" MORTAR_COLORS=\"\\x09\" RMSG=13 CMSG=10 RMSG2=9 CMSG2=10 PLAYER1=\" PLAYER ONE\" PLAYER2=\" PLAYER TWO\" GAMEOVER=\" GAME OVER \" READY=\"   READY!  \" ABOUT=\"Inspired by a simpleJ devkit example by Gerardo Horvilleur\"";
static const char builtin_mazefile_str[] = "lvl/simplej.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\277\371\332\304\304\304\304\304\304\277\371\272\371\332\304\304\304\304\304\304\277\371\332\304\277\371\272\272"
  "\272\376\263 \263\371\263      \263\371\272\371\263      \263\371\263 \263\376\272\272"
  "\272\371\300\304\331\371\300\304\304\304\304\304\304\331\371\320\371\300\304\304\304\304\304\304\331\371\300\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\322\371\306\315\315\315\315\315\315\313\315\315\315\315\315\315\265\371\322\371\306\315\265\371\272\272"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\310\315\315\315\273\371\314\315\315\315\315\315\315\265 \320 \306\315\315\315\315\315\315\271\371\311\315\315\315\274\274"
  "    \272\371\272                 \272\371\272     "
  "\315\315\315\315\274\371\320 \332\304\325\315\315\315\315\360\315\315\315\315\270\304\277 \320\371\310\315\315\315\315\315"
  "     \371  \263 \263         \263 \263  \371      "
  "\315\315\315\315\273\371\322 \300\304\324\315\315\315\315\315\315\315\315\315\276\304\331 \322\371\311\315\315\315\315\315"
  "    \272\371\272                 \272\371\272     "
  "\311\315\315\315\274\371\320 \306\315\315\315\315\315\315\313\315\315\315\315\315\315\265 \320\371\310\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\273\371\306\315\315\315\315\315\315\265\371\320\371\306\315\315\315\315\315\315\265\371\311\315\265\371\272\272"
  "\272\376\371\371\272\371\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\371\272\371\371\376\272\272"
  "\314\315\265\371\320\371\322\371\306\315\315\315\315\315\315\313\315\315\315\315\315\315\265\371\322\371\320\371\306\315\271\271"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\312\315\315\315\315\315\315\265\371\320\371\306\315\315\315\315\315\315\312\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;