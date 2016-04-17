int maze_n = 15;
int maze_w = 19;
int maze_h = 13;
int maze_flags = 0;
const char *maze_args = "RHERO=7.5,6.5,8.5,4.5,9.5,7.5,7.5,7.5,9.5,7.5,8.5,10.5,6.5,6.5,9.5 CHERO=9.5,13.5,9.5,9.5,12.5,9.5,10.5,10.5,9.5,9.5,9.5,9.5,9.5,10.5,2.5 RGHOST=2.5,1.5,4.5,8.5,6.5,5.5,3.5,3.5,7.5,9.5,3.5,4.5,9.5,6.5,6.5 CGHOST=9.5,11.5,9.5,9.5,9.5,9.5,9.5,9.5,9.5,10.0,9.5,9.5,9.5,8.5,9.5 ROGHOST=0.0,0.0,0.0,6.0,3.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,6.0,0.0,0.0 COGHOST=5.0,0.0,4.0,3.0,3.0,6.0,5.0,5.0,7.0,2.5,5.0,6.0,2.0,0.0,3.0 RTOP=2.5,1.5,4.5,2.5,3.5,5.5,3.5,3.5,7.5,9.5,3.5,4.5,3.5,6.5,6.5 RFRUIT=7.5,6.5,8.5,4.5,9.5,7.5,7.5,7.5,9.5,7.5,8.5,10.5,6.5,6.5,9.5 CFRUIT=9.5,13.5,9.5,9.5,12.5,9.5,10.5,10.5,9.5,9.5,9.5,9.5,9.5,10.5,2.5 WALL_COLORS=\"\\x00\\x0A\\x07\" MORTAR_COLORS=\"\\x01\\x02\\x04\" DOT_COLORS=\"\\x07\\x0F\\x0F\" RMSG=12 CMSG=4 RMSG2=0 CMSG2=4 READY=\"  READY! \" GAMEOVER=\" GAME OVER \" PLAYER1=\" PLAYER ONE\" PLAYER2=\" PLAYER TWO\" ABOUT=\"Inspired by Scott Harber\'s \'Big Yellow Head\'\"";
static const char builtin_mazefile_str[] = "lvl/byh.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\332\277\371\332\277\371\311\360\273\371\332\277\371\332\277\371\272\272"
  "\272\371\300\331\371\300\331\371\310\315\274\371\300\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\273\371\332\304\277\371\311\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\320\371\300\304\331\371\320\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\371\371\371\371\371\371\371\371\306\315\265\371\272\272"
  "\272\371\371\371\371\371\322\371\306\313\265\371\322\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\320\371\371\320\371\371\320\371\306\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x1 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\311\315\313\315\315\315\313\315\315\315\273\371\272\371\272\272"
  "\272\371\272\371\272\371\320\371\371\371\320\371\371\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\371\371\322\371\371\371\322\371\272\371\272\371\272\272"
  "\272\371\272\371\272\371\306\315\312\315\315\315\312\315\274\371\272\371\272\272"
  "\272\371\272\371\272\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\310\315\315\315\315\315\315\315\315\315\315\315\274\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x2 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\322\371\322\371\322\371\311\360\273\371\322\371\322\371\322\371\272\272"
  "\272\371\272\371\272\371\272\371\272 \272\371\272\371\272\371\272\371\272\272"
  "\272\371\320\371\272\371\272\371\272 \272\371\272\371\272\371\320\371\272\272"
  "\272\371\371\371\320\371\272\371\272 \272\371\272\371\320\371\371\371\272\272"
  "\272\371\322\371\371\371\320\371\272 \272\371\320\371\371\371\322\371\272\272"
  "\272\371\272\371\322\371\371\371\310\315\274\371\371\371\322\371\272\371\272\272"
  "\272\371\272\371\272\371\322\371\371\371\371\371\322\371\272\371\272\371\272\272"
  "\272\371\320\371\320\371\320\371\306\315\265\371\320\371\320\371\320\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x3 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\332\304\304\277\371\306\273\371\311\265\371\332\304\304\277\371\272\272"
  "\272\371\300\304\304\331\371\371\310\315\274\371\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\265\371\306\313\265\371\306\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\273\371\272\371\311\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\272\371\272\371\272\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\265\371\320\371\320\371\320\371\306\315\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x4 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\273\371\306\315\315\270\277\371\332\277\371\322\371\272\272"
  "\272\371\371\371\371\272\371\371\371\371\263\263\371\263\263\371\272\371\272\272"
  "\272\371\311\265\371\310\315\315\273\371\300\331\371\263\263\371\272\371\272\272"
  "\272\371\272\371\371\371\371\371\272\371\371\371\371\263\263\371\272\371\272\272"
  "\272\371\272\371\332\304\277\371\310\315\315\273\371\300\331\371\272\371\272\272"
  "\272\371\272\371\263 \263\371\371\371\371\272\371\371\371\371\320\371\272\272"
  "\272\371\272\371\263 \263\371\332\277\371\310\315\315\273\371\371\371\272\272"
  "\272\371\320\371\300\304\331\371\300\331\371\371\371\371\310\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\332\277\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\274\274"
  "                    "
/* 0x5 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\273\371\332\304\304\304\277\371\311\315\315\265\371\272\272"
  "\272\371\371\371\371\320\371\300\304\304\304\331\371\320\371\371\371\371\272\272"
  "\272\371\311\265\371\371\371\371\371\371\371\371\371\371\371\306\273\371\272\272"
  "\272\371\272\371\371\322\371\311\315\360\315\273\371\322\371\371\272\371\272\272"
  "\272\371\272\371\371\320\371\310\315\315\315\274\371\320\371\371\272\371\272\272"
  "\272\371\310\265\371\371\371\371\371\371\371\371\371\371\371\306\274\371\272\272"
  "\272\371\371\371\371\322\371\332\304\304\304\277\371\322\371\371\371\371\272\272"
  "\272\371\306\315\315\274\371\300\304\304\304\331\371\310\315\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x6 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\265\371\322\371\332\304\277\371\306\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\272\371\263 \263\371\371\371\272\371\272\272"
  "\272\371\310\313\315\313\265\371\320\371\300\304\331\371\306\313\274\371\272\272"
  "\272\371\371\320\371\320\371\371\371\371\371\371\371\371\371\320\371\371\272\272"
  "\272\371\371\371\371\371\371\371\311\315\315\315\273\371\371\371\371\371\272\272"
  "\272\371\322\371\322\371\322\371\272\371\371\371\272\371\322\371\322\371\272\272"
  "\272\371\272\371\272\371\272\371\320\371\322\371\320\371\272\371\272\371\272\272"
  "\272\371\320\371\310\315\274\371\371\371\272\371\371\371\310\315\274\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\312\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x7 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\265\371\322\371\332\304\277\371\306\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\272\371\263 \263\371\371\371\272\371\272\272"
  "\272\371\310\313\315\313\265\371\320\371\300\304\331\371\306\313\274\371\272\272"
  "\272\371\371\320\371\320\371\371\371\371\371\371\371\371\371\320\371\371\272\272"
  "\272\371\371\371\371\371\371\371\311\315\315\315\273\371\371\371\371\371\272\272"
  "\272\371\322\371\322\371\322\371\272\371\371\371\272\371\322\371\322\371\272\272"
  "\272\371\272\371\272\371\272\371\320\371\322\371\320\371\272\371\272\371\272\272"
  "\272\371\320\371\310\315\274\371\371\371\272\371\371\371\310\315\274\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\312\315\315\315\315\315\315\315\274\274"
  "                    "
/* 0x8 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\322\371\322\371\322\371\322\371\322\371\322\371\322\371\322\371\272\272"
  "\272\371\272\371\272\371\272\371\272\371\272\371\272\371\272\371\272\371\272\272"
  "\272\371\320\371\320\371\320\371\320\371\320\371\320\371\320\371\320\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\371\322\371\322\371\322\371\322\371\322\371\322\371\322\371\371\272\272"
  "\272\371\371\272\371\272\371\272\371\272\371\272\371\272\371\272\371\371\272\272"
  "\272\371\371\320\371\320\371\320\371\320\371\320\371\320\371\320\371\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\376\306\315\315\265\371\306\315\313\315\265\371\306\315\315\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\312\315\315\315\315\315\315\315\315\274\274"
/* 0x9 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\273\371\332\304\304\304\304\304\304\277\371\311\265\371\272\272"
  "\272\371\371\371\272\371\300\304\277  \332\304\331\371\272\371\371\272\272"
  "\272\371\322\371\272\371\371\371\263  \263\371\371\371\272\371\371\272\272"
  "\272\371\272\371\310\315\273\371\263  \263\371\311\315\274\371\371\272\272"
  "\272\371\272\371\371\371\272\371\300\304\304\331\371\272\371\371\371\371\272\272"
  "\272\371\323\304\277\371\272\371\371\371\371\371\371\272\371\332\277\371\272\272"
  "\272\371\263 \263\371\310\315\313\360\360\313\315\274\371\263\263\371\272\272"
  "\272\371\263 \263\371\371\371\272  \272\371\371\371\263\263\371\272\272"
  "\272\376\300\304\324\315\265\371\310\315\315\274\371\306\315\276\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0xA */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\315\315\265\371\306\315\315\315\273\371\332\277\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\272\371\263\263\371\272\272"
  "\272\371\332\304\304\277\371\306\315\313\315\273\371\272\371\263\263\371\272\272"
  "\272\371\263  \263\371\371\371\320\371\272\371\272\371\263\263\371\272\272"
  "\272\371\263  \263\371\322\371\371\371\272\371\272\371\263\263\371\272\272"
  "\272\371\300\304\304\331\371\310\315\315\315\274\371\320\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\273\371\306\315\313\315\265\371\311\315\315\265\371\272\272"
  "\272\376\371\371\371\320\371\371\371\320\371\371\371\320\371\371\371\376\272\272"
  "\272\371\332\277\371\371\371\322\371\371\371\322\371\371\371\332\277\371\272\272"
  "\310\315\276\324\315\315\315\312\315\315\315\312\315\315\315\276\324\315\274\274"
/* 0xB */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\332\304\304\277\371\322\371\371\371\322\371\332\304\304\277\371\272\272"
  "\272\371\300\304\304\331\371\310\315\315\315\274\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\311\315\315\315\273\371\332\304\304\277\371\272\272"
  "\272\371\300\304\304\331\371\320\371\371\371\320\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\007\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\273\371\322\371\371\371\322\371\311\315\315\265\371\272\272"
  "\272\371\371\371\371\272\371\310\315\315\315\274\371\272\371\371\371\371\272\272"
  "\272\376\306\265\371\272\371\371\371\371\371\371\371\272\371\306\265\376\272\272"
  "\272\371\371\371\371\272\371\311\315\315\315\273\371\272\371\371\371\371\272\272"
  "\310\315\315\315\315\312\315\274   \310\315\312\315\315\315\315\274\274"
/* 0xC */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\315\265\371\322\371\322\371\306\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\315\274\371\310\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\315\265\371\306\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\315\273\371\311\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\272"
  "\272\376\306\315\315\315\265\371\320\371\320\371\306\315\315\315\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0xD */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\306\315\315\315\315\315\315\315\315\315\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\265\371\322\371\306\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\265\371\272\371\306\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\315\315\315\265\371\320\371\306\315\315\315\315\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\376\306\315\315\315\315\315\315\315\315\315\315\315\315\315\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0xE */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\272\371\332\277\371\322\371\322\371\322\371\332\277\371\272\371\272\272"
  "\272\371\272\371\263\263\371\272\371\272\371\272\371\263\263\371\272\371\272\272"
  "\272\371\272\371\263\263\371\272\371\272\371\272\371\263\263\371\272\371\272\272"
  "\272\371\272\371\263\263\371\272\371\272\371\272\371\263\263\371\272\371\272\272"
  "\272\371\320\371\300\331\371\320\371\320\371\320\371\300\331\371\272\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\376\306\315\315\315\315\315\315\315\315\315\315\315\315\315\274\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
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
/* 0x3 */
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
/* 0x4 */
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
/* 0x5 */
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
/* 0x6 */
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
/* 0x7 */
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
/* 0x8 */
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
/* 0x9 */
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
/* 0xA */
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
/* 0xB */
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
/* 0xC */
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
/* 0xD */
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
/* 0xE */
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