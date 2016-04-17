int maze_n = 2;
int maze_w = 25;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "READY=\" READY!\" GAMEOVER=\" GONE  \" PLAYER1=\" P ONE \" PLAYER2=\" P TWO \" RGHOST=12.5 ROGHOST=2 COGHOST=1 CGHOST=13 RFRUIT=11.5 CFRUIT=9.5 RTOP=8 RHERO=11.5 CHERO=5.5 RMSG=14 RMSG2=8 ABOUT=\"Inspired by Richwood Software\'s \'Ghost Hunter II\'\"";
static const char builtin_mazefile_str[] = "lvl/ghost.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "           \272 \272            "
  "\311\315\315\315\315\315\315\315\273  \272 \272  \311\315\315\315\313\315\315\315\273\273"
  "\272\371\371\371\371\376\371\371\272  \272 \272  \272\371\371\371\272\376\371\371\272\272"
  "\272\371\311\315\313\315\265\371\272  \272 \272  \272\371\322\371\320\371\322\371\272\272"
  "\272\371\272 \272\371\371\371\272  \272 \272  \272\371\272\371\371\371\272\371\272\272"
  "\272\371\314\315\274\371\322\371\310\315\315\274 \310\315\315\274\371\314\315\273\371\272\371\272\272"
  "\272\371\272\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\272 \272\371\272\371\272\272"
  "\272\371\320\371\306\315\274\371\306\315\315\265 \306\315\315\273\371\310\315\274\371\272\371\272\272"
  "\272\371\371\371\371\371\371\371\371       \272\371\371\371\371\371\272\371\272\272"
  "\314\315\265\371\311\315\265\371\322 \311\315\315\315\273 \310\315\315\315\273\371\320\371\272\272"
  "\272\371\371\371\272\371\371\371\272 \272   \377 \371\371\371\371\272\371\371\371\272\272"
  "\272\371\306\315\271 \306\315\271 \272   \377 \306\315\265\371\314\315\265\371\272\272"
  "\272\371\371\371\272\371\371\371\272 \272   \377 \371\371\371\371\272\371\371\371\272\272"
  "\314\315\265\371\310\315\265\371\320 \310\315\315\315\274 \311\315\315\315\274\371\322\371\272\272"
  "\272\371\371\371\371\371\371\371\371       \272\371\371\371\371\371\272\371\272\272"
  "\272\371\322\371\306\315\273\371\306\315\315\265 \306\315\315\274\371\311\315\273\371\272\371\272\272"
  "\272\371\272\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\272 \272\371\272\371\272\272"
  "\272\371\314\315\273\371\320\371\311\315\315\273 \311\315\315\273\371\314\315\274\371\272\371\272\272"
  "\272\371\272 \272\371\371\371\272  \272 \272  \272\371\272\371\371\371\272\371\272\272"
  "\272\371\310\315\312\315\265\371\272  \272 \272  \272\371\320\371\322\371\320\371\272\272"
  "\272\371\371\371\371\376\371\371\272  \272 \272  \272\371\371\371\272\376\371\371\272\272"
  "\310\315\315\315\315\315\315\315\274  \272 \272  \310\315\315\315\312\315\315\315\274\274"
  "           \272 \272            "
/* 0x1 */
  "           \272 \272            "
  "\311\315\315\315\315\315\315\315\273  \272 \272  \311\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\376\371\371\272  \272 \272  \272\371\371\371\371\376\371\371\272\272"
  "\272\371\311\315\315\315\265\371\272  \272 \272  \272\371\322\371\311\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\272  \272 \272  \272\371\272\371\272 \272\371\272\272"
  "\272\371\320\371\311\315\315\315\312\315\315\274 \310\315\315\274\371\320\371\310\315\274\371\272\272"
  "\272\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\315\271\371\306\315\315\315\315\265 \306\315\315\313\315\265\371\311\315\273\371\272\272"
  "\272\371\371\371\272\371\371\371\371       \272\371\371\371\272 \272\371\272\272"
  "\314\315\273\371\310\315\265\371\322 \311\315\315\315\273 \320\371\322\371\310\315\274\371\272\272"
  "\272 \272\371\371\371\371\371\272 \272   \377 \371\371\272\371\371\371\371\371\272\272"
  "\272 \314\315\265 \306\315\271 \272   \377 \306\315\271\371\306\315\315\315\271\271"
  "\272 \272\371\371\371\371\371\272 \272   \377 \371\371\272\371\371\371\371\371\272\272"
  "\314\315\274\371\311\315\265\371\320 \310\315\315\315\274 \322\371\320\371\311\315\273\371\272\272"
  "\272\371\371\371\272\371\371\371\371       \272\371\371\371\272 \272\371\272\272"
  "\272\371\306\315\271\371\306\315\315\315\315\265 \306\315\315\312\315\265\371\310\315\274\371\272\272"
  "\272\371\371\371\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\322\371\310\315\315\315\313\315\315\273 \311\315\315\273\371\322\371\311\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\272  \272 \272  \272\371\272\371\272 \272\371\272\272"
  "\272\371\310\315\315\315\265\371\272  \272 \272  \272\371\320\371\310\315\274\371\272\272"
  "\272\371\371\371\371\376\371\371\272  \272 \272  \272\371\371\371\371\376\371\371\272\272"
  "\310\315\315\315\315\315\315\315\274  \272 \272  \310\315\315\315\315\315\315\315\274\274"
  "           \272 \272            "
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
