int maze_n = 1;
int maze_w = 27;
int maze_h = 22;
int maze_flags = 0;
const char *maze_args = "READY=\"  READY! \" GAMEOVER=\"GAME OVER\" PLAYER1=\"PLAYER  1\" PLAYER2=\"PLAYER  2\" RGHOST=10.5 ROGHOST=1 COGHOST=1.5 RFRUIT=12.5 RTOP=9 RHERO=16.5 RMSG=12 RMSG2=8 ABOUT=\"Inspired by dwilson\'s \'AsciiMan\' project\"";
static const char builtin_mazefile_str[] = "lvl/asciiman.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\313\315\315\315\315\274 \310\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\376\332\304\304\277\371\332\304\304\304\277\371\272\371\332\304\304\304\277\371\332\304\304\277\376\272\272"
  "\272\371\300\304\304\331\371\300\304\304\304\331\371\320\371\300\304\304\304\331\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\265\371\332\277\371\306\315\315\313\315\315\265\371\332\277\371\306\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\272\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\273\371\263\306\315\315\265 \320 \306\315\315\265\263\371\311\315\315\315\315\274\274"
  "\0\0\0\0\0\272\371\263\263         \263\263\371\272\0\0\0\0\0\0"
  "\315\315\315\315\315\274\371\300\331 \311\315\315\360\315\315\273 \300\331\371\310\315\315\315\315\315\315"
  "      \371   \272     \272   \371       "
  "\315\315\315\315\315\273\371\332\277 \310\315\315\315\315\315\274 \332\277\371\311\315\315\315\315\315\315"
  "\0\0\0\0\0\272\371\263\263         \263\263\371\272\0\0\0\0\0\0"
  "\311\315\315\315\315\274\371\300\331 \306\315\315\313\315\315\265 \300\331\371\310\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\270\277\371\306\315\315\315\265\371\320\371\306\315\315\315\265\371\332\325\315\265\371\272\272"
  "\272\376\371\371\263\263\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\263\263\371\371\376\272\272"
  "\314\315\265\371\300\331\371\332\277\371\306\315\315\313\315\315\265\371\332\277\371\300\331\371\306\315\271\271"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\272\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\274\371\306\315\315\315\315\276\324\315\315\265\371\320\371\306\315\315\276\324\315\315\315\315\265\371\310\310"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273 \311\315\315\315\315\315\315\315"
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;