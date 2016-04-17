int maze_n = 7;
int maze_w = 21;
int maze_h = 25;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\"  GONE \" PLAYER1=\"  1UP  \" PLAYER2=\"  2UP  \" RGHOST=13.5 ROGHOST=1 COGHOST=1 RFRUIT=15.5 RTOP=11.5 RHERO=19.5 RMSG=15,15,15,15,15,15,11 RMSG2=11,11,11,11,11,11,0 CMSG=7 CMSG2=7 ABOUT=\"Inspired by Marko Teittinen\'s \'Eat It\' DOS game\" WALL_COLORS=\"\\x0F\" MORTAR_COLORS=\"\\x08\" DOT_COLORS=\"\\x0E\" PELLET_COLORS=\"\\x0D\"";
static const char builtin_mazefile_str[] = "lvl/eatit.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\376\322\371\306\315\273\371\322\371\322\371\322\371\311\315\265\371\322\376\272\272"
  "\272\371\272\371\371\371\272\371\320\371\272\371\320\371\272\371\371\371\272\371\272\272"
  "\272\371\310\315\265\371\320\371\371\371\320\371\371\371\320\371\306\315\274\371\272\272"
  "\272\371\371\371\371\371\371\371\322\371\371\371\322\371\371\371\371\371\371\371\272\272"
  "\312\315\265\371\306\315\315\315\312\265\371\306\312\315\315\315\265\371\306\315\312\312"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\277\371\306\315\265\371\311\315\265\371\322\371\306\315\273\371\306\315\265\371\332\332"
  "\263\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\263\263"
  "\263\371\306\315\273\371\320\371\306\315\312\315\265\371\320\371\311\315\265\371\263\263"
  "\263\371\371\371\272\371         \371\272\371\371\371\263\263"
  "\306\315\265\371\272\371\322 \311\315\360\315\273 \322\371\272\371\306\315\265\265"
  "\263\371\371\371\272\371\272 \272   \272 \272\371\272\371\371\371\263\263"
  "\263\371\306\315\271\371\320 \310\315\315\315\274 \320\371\314\315\265\371\263\263"
  "\263\371\371\371\272\371         \371\272\371\371\371\263\263"
  "\324\315\265\371\320\371\311\315\265\371\322\371\306\315\273\371\320\371\306\315\276\276"
  " \371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371  "
  "\273\371\306\315\273\371\320\371\306\315\312\315\265\371\320\371\311\315\265\371\311\311"
  "\272\376\371\371\272\371\371\371\371\371 \371\371\371\371\371\272\371\371\376\272\272"
  "\314\315\265\371\320\371\311\315\265\371\322\371\306\315\273\371\320\371\306\315\271\271"
  "\272\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\274\371\306\315\312\315\265\371\310\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x1 */
  "\311\315\315\315\315\315\313\315\315\315\313\315\315\315\313\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\272\272"
  "\272\376\306\315\265\371\272\371\322\371\272\371\322\371\272\371\306\315\265\376\272\272"
  "\272\371\371\371\371\371\320\371\272\371\320\371\272\371\320\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\371\371\272\371\371\371\272\371\371\371\306\315\265\371\272\272"
  "\272\371\371\371\371\371\322\371\314\265\371\306\271\371\322\371\371\371\371\371\272\272"
  "\274\371\322\371\322\371\320\371\320\371\371\371\320\371\320\371\322\371\322\371\310\310"
  " \371\272\371\272\371\371\371\371\371\322\371\371\371\371\371\272\371\272\371  "
  "\277\371\320\371\320\371\322\371\306\315\312\315\265\371\322\371\320\371\320\371\332\332"
  "\263\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\263\263"
  "\306\315\315\315\265\371\310\315\315\265 \306\315\315\274\371\306\315\315\315\265\265"
  "\263\371\371\371\371\371         \371\371\371\371\371\263\263"
  "\263\371\306\315\265\371\322 \311\315\360\315\273 \322\371\306\315\265\371\263\263"
  "\263\371\371\371\371\371\272 \272   \272 \272\371\371\371\371\371\263\263"
  "\263\371\306\315\315\315\274 \310\315\315\315\274 \310\315\315\315\265\371\263\263"
  "\263\371\371\371\371\371\371       \371\371\371\371\371\371\263\263"
  "\331\371\306\265\371\322\371\306\315\315\313\315\315\265\371\322\371\306\265\371\300\300"
  " \371\371\371\371\272\371\371\371\371\272\371\371\371\371\272\371\371\371\371  "
  "\273\371\306\265\371\310\315\315\265\371\320\371\306\315\315\274\371\306\265\371\311\311"
  "\272\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\311\315\265\371\306\313\265\371\306\315\273\371\306\265\371\272\272"
  "\272\371\371\371\371\272\371\371\371\371\272\371\371\371\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\272\371\306\265\371\320\371\306\265\371\272\371\306\265\376\272\272"
  "\272\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\272\272"
  "\310\315\315\315\315\312\315\315\315\315\315\315\315\315\315\312\315\315\315\315\274\274"
/* 0x2 */
  "\311\315\315\315\315\315\313\315\315\315\315\315\315\315\313\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\272\371\322\371\322\371\320\371\311\265\371\306\273\371\320\371\322\371\322\371\272\272"
  "\272\376\272\371\272\371\371\371\272\371\371\371\272\371\371\371\272\371\272\376\272\272"
  "\272\371\320\371\320\371\306\315\274\371\322\371\310\315\265\371\320\371\320\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\272"
  "\312\315\315\315\315\315\265\371\306\315\312\315\265\371\306\315\315\315\315\315\312\312"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\325\315\315\315\265\371\306\315\315\273\371\311\315\315\265\371\306\315\315\315\270\270"
  "\263\371\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\371\263\263"
  "\263\371\306\315\265\371\311\265\371\320\371\320\371\306\273\371\306\315\265\371\263\263"
  "\263\371\371\371\371\371\272       \272\371\371\371\371\371\263\263"
  "\306\315\315\265\371\306\274 \311\315\360\315\273 \310\265\371\306\315\315\265\265"
  "\263\371\371\371\371\371  \272   \272  \371\371\371\371\371\263\263"
  "\263\371\306\315\265\371\322 \310\315\315\315\274 \322\371\306\315\265\371\263\263"
  "\263\371\371\371\371\371\272       \272\371\371\371\371\371\263\263"
  "\324\315\265\371\306\315\312\315\315\265 \306\315\315\312\315\265\371\306\315\276\276"
  " \371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371  "
  "\313\315\315\315\315\265\371\311\315\315\315\315\315\273\371\306\315\315\315\315\313\313"
  "\272\371\371\371\371\371\371\272\371\371 \371\371\272\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\322\371\320\371\306\315\265\371\320\371\322\371\306\265\371\272\272"
  "\272\376\371\371\371\272\371\371\371\371\371\371\371\371\371\272\371\371\371\376\272\272"
  "\272\371\306\315\315\274\371\322\371\306\315\265\371\322\371\310\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\312\315\315\315\315\315\312\315\315\315\315\315\315\274\274"
/* 0x3 */
  "\311\315\315\315\315\315\315\313\315\315\315\315\315\313\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\371\272\272"
  "\272\371\311\315\315\265\371\320\371\306\315\265\371\320\371\306\315\315\273\371\272\272"
  "\272\376\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\376\272\272"
  "\272\371\320\371\311\315\315\315\315\265\371\306\315\315\315\315\273\371\320\371\272\272"
  "\272\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371\272\272"
  "\312\315\273\371\272\371\306\265\371\306\315\265\371\306\265\371\272\371\311\315\312\312"
  "  \272\371\320\371\371\371\371\371\371\371\371\371\371\371\320\371\272   "
  "\277 \320\371\371\371\322\371\007\371\322\371\007\371\322\371\371\371\320 \332\332"
  "\263  \371\322\371\272\371\371\371\272\371\371\371\272\371\322\371  \263\263"
  "\306\315\265\371\272\371\310\265 \306\312\265 \306\274\371\272\371\306\315\265\265"
  "\263\371\371\371\272\371\371       \371\371\272\371\371\371\263\263"
  "\263\371\306\315\312\315\265 \311\315\360\315\273 \306\315\312\315\265\371\263\263"
  "\263\371\371\371\371\371\371 \272   \272 \371\371\371\371\371\371\263\263"
  "\263\371\306\273\371\311\265 \310\315\315\315\274 \306\273\371\311\265\371\263\263"
  "\263\371\371\272\371\272\371       \371\272\371\272\371\371\263\263"
  "\324\265\371\320\371\320\371\306\315\315\313\315\315\265\371\320\371\320\371\306\276\276"
  "  \371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371   "
  "\313\265\371\306\315\315\315\315\265\371\320\371\306\315\315\315\315\265\371\306\313\313"
  "\272\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\311\315\315\315\265\371\306\315\315\315\273\371\306\265\371\272\272"
  "\272\376\371\371\371\272\371\371\371\371\371\371\371\371\371\272\371\371\371\376\272\272"
  "\272\371\306\315\315\274\371\306\315\265\371\306\315\265\371\310\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x4 */
  "\311\315\315\315\315\315\313\315\315\315\313\315\315\315\313\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371\272\272"
  "\272\376\306\315\273\371\320\371\322\371\272\371\322\371\320\371\311\315\265\376\272\272"
  "\272\371\371\371\272\371\371\371\272\371\272\371\272\371\371\371\272\371\371\371\272\272"
  "\314\315\265\371\272\371\322\371\272\371\320\371\272\371\322\371\272\371\306\315\271\271"
  "\272\371\371\371\320\371\320\371\272\371\371\371\272\371\320\371\320\371\371\371\272\272"
  "\274\371\322\371\371\371\371\371\272\371\322\371\272\371\371\371\371\371\322\371\310\310"
  " \371\310\315\265\371\306\315\271\371\272\371\314\315\265\371\306\315\274\371  "
  "\277\371\371\371\371\371\371\371\320\371\272\371\320\371\371\371\371\371\371\371\332\332"
  "\306\315\265\371\306\315\273\371\371\371\272\371\371\371\311\315\265\371\306\315\265\265"
  "\263\371\371\371\371\371\314\315\265\371\320\371\306\315\271\371\371\371\371\371\263\263"
  "\263\371\306\315\265\371\320       \320\371\306\315\265\371\263\263"
  "\263\371\371\371\371\371  \311\315\360\315\273  \371\371\371\371\371\263\263"
  "\306\315\265\371\306\315\265 \272   \272 \306\315\265\371\306\315\265\265"
  "\263\371\371\371\371\371  \310\315\315\315\274  \371\371\371\371\371\263\263"
  "\263\371\322\371\322\371\322       \322\371\322\371\322\371\263\263"
  "\331\371\320\371\272\371\310\315\265\371\322\371\306\315\274\371\272\371\320\371\300\300"
  " \371\371\371\272\371\371\371\371\371\272\371\371\371\371\371\272\371\371\371  "
  "\273\371\311\315\312\315\265\371\322\371\320\371\322\371\306\315\312\315\273\371\311\311"
  "\272\371\272\371\371\371\371\371\272\371 \371\272\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\306\315\265\371\272\371\322\371\272\371\306\315\265\371\272\371\272\272"
  "\272\371\272\371\371\371\371\371\272\371\272\371\272\371\371\371\371\371\272\371\272\272"
  "\272\376\320\371\306\315\315\315\274\371\320\371\310\315\315\315\265\371\320\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x5 */
  "\311\315\315\315\315\315\313\315\315\315\315\315\315\315\313\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\272\371\007\371\007\371\272\371\306\315\313\315\265\371\272\371\007\371\007\371\272\272"
  "\272\376\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\376\272\272"
  "\272\371\306\315\265\371\320\371\322\371\320\371\322\371\320\371\306\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\272\371\371\371\272\371\371\371\371\371\371\371\272\272"
  "\312\315\265\371\306\315\273\371\310\315\315\315\274\371\311\315\265\371\306\315\312\312"
  " \371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371  "
  "\277\371\306\315\273\371\272\371\306\315\313\315\265\371\272\371\311\315\265\371\332\332"
  "\263\371\371\371\272\371\272\371\371\371\272\371\371\371\272\371\272\371\371\371\263\263"
  "\306\315\265\371\320\371\314\315\265\371\320\371\306\315\271\371\320\371\306\315\265\265"
  "\263\371\371\371\371\371\320       \320\371\371\371\371\371\263\263"
  "\263\371\311\315\265\371  \311\315\360\315\273  \371\306\315\273\371\263\263"
  "\263\371\272\371\371\371\322 \272   \272 \322\371\371\371\272\371\263\263"
  "\263\371\272\371\306\315\271 \310\315\315\315\274 \314\315\265\371\272\371\263\263"
  "\263\371\272\371\371\371\272       \272\371\371\371\272\371\263\263"
  "\331\371\310\315\265\371\272\371\306\315\313\315\265\371\272\371\306\315\274\371\300\300"
  " \371\371\371\371\371\272\371\371\371\272\371\371\371\272\371\371\371\371\371  "
  "\313\315\265\371\306\315\312\315\265\371\320\371\306\315\312\315\265\371\306\315\313\313"
  "\272\371\371\371\371\371\371\371\371\371 \371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\322\371\306\315\315\315\265\371\322\371\306\315\265\371\272\272"
  "\272\376\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\376\272\272"
  "\272\371\306\315\265\371\272\371\306\265\371\306\265\371\272\371\306\315\265\371\272\272"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\312\315\315\315\315\315\315\315\312\315\315\315\315\315\274\274"
/* 0x6 */
  "\311\315\315\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\371\272\272"
  "\272\376\311\315\265\371\306\315\265\371\320\371\306\315\265\371\306\315\273\376\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\306\315\273\371\306\315\315\315\265\371\311\315\265\371\320\371\272\272"
  "\272\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\272\272"
  "\312\315\265\371\322\371\310\315\315\265\371\306\315\315\274\371\322\371\306\315\312\312"
  " \371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\272\371\371\371  "
  "\325\315\265\371\320\371\322\371\306\265\371\306\265\371\322\371\320\371\306\315\270\270"
  "\263\371\371\371\371\371\272\371\371\371\371\371\371\371\272\371\371\371\371\371\263\263"
  "\263\371\007\371\322\371\320 \306\315\315\315\265 \320\371\322\371\007\371\263\263"
  "\263\371\371\371\272\371         \371\272\371\371\371\263\263"
  "\263\371\306\315\274\371\322 \311\315\360\315\273 \322\371\310\315\265\371\263\263"
  "\263\371\371\371\371\371\272 \272   \272 \272\371\371\371\371\371\263\263"
  "\306\315\265\371\306\315\274 \310\315\315\315\274 \310\315\265\371\306\315\265\265"
  "\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263"
  "\331\371\306\315\273\371\311\315\315\315\315\315\315\315\273\371\311\315\265\371\300\300"
  " \371\371\371\272\371\272\371\371\371\371\371\371\371\272\371\272\371\371\371  "
  "\273\371\322\371\272\371\320\371\306\315\315\315\265\371\320\371\272\371\322\371\311\311"
  "\272\371\272\371\272\371\371\371\371\371 \371\371\371\371\371\272\371\272\371\272\272"
  "\272\371\272\371\310\315\315\273\371\306\315\265\371\311\315\315\274\371\272\371\272\272"
  "\272\371\272\371\371\371\371\272\371\371\371\371\371\272\371\371\371\371\272\371\272\272"
  "\272\376\310\315\315\265\371\310\315\265\371\306\315\274\371\306\315\315\274\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x4 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x5 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x6 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
