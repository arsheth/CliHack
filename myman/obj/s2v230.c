int maze_n = 4;
int maze_w = 23;
int maze_h = 23;
int maze_flags = 0;
const char *maze_args = "         RTOP=10.5        RGHOST=11.5  CGHOST=11.5       ROGHOST=1.5  COGHOST=1.5        RFRUIT=13.5  CFRUIT=11.5         RHERO=21.5   CHERO=11.5          RMSG=22      CMSG=8         RMSG2=0      CMSG2=8 MORTAR_COLORS=\"\\x03\\x02\\x0D\\x07\"    DOT_COLORS=\"\\x0E\" PELLET_COLORS=\"\\x0A\"         READY=\" READY!\"       PLAYER1=\" P ONE \"       PLAYER2=\" P TWO \"      GAMEOVER=\"GOODBYE\"         ABOUT=\"Inspired by Ikon City\'s Vermania\"";
static const char builtin_mazefile_str[] = "lvl/vermin.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\313\315\315\315\315\315\313\315\315\315\315\315\315\315\273\273"
  "\272\371 \371 \371 \371\272\371 \371 \371\272\371 \371 \371 \371\272\272"
  "\272 \322 \322 \322 \320 \306\315\265 \320 \322 \322 \322 \272\272"
  "\272\371\272\376\272\371\272\371 \371 \371 \371 \371\272\371\272\376\272\371\272\272"
  "\272 \272 \272 \310\315\265 \306\315\265 \306\315\274 \272 \272 \272\272"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \320 \310\315\265 \306\315\315\315\315\315\265 \306\315\274 \320 \272\272"
  "\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\272"
  "\272 \322 \0 \322 \0 \306\315\265 \0 \322 \0 \322 \272\272"
  "\272\371\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\371\272\272"
  "\272 \310\315\265 \320 \311\315\315\360\315\315\273 \320 \306\315\274 \272\272"
  "\272\371 \371 \371 \371\272     \272\371 \371 \371 \371\272\272"
  "\272 \0 \311\315\265 \310\315\315\315\315\315\274 \306\315\273 \0 \272\272"
  "\272\371 \371\272\371 \371 \371   \371 \371 \371\272\371 \371\272\272"
  "\312\315\265 \320 \0 \0 \306\315\265 \0 \0 \320 \306\315\312\312"
  " \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371  "
  "\273 \322 \311\315\265 \306\315\315\315\315\315\265 \306\315\273 \322 \311\311"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \272 \272 \311\315\265 \306\315\265 \306\315\273 \272 \272 \272\272"
  "\272\371\272\376\272\371\272\371 \371 \371 \371 \371\272\371\272\376\272\371\272\272"
  "\272 \320 \320 \320 \0 \306\315\265 \0 \320 \320 \320 \272\272"
  "\272\371 \371 \371 \371 \371   \371 \371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x1 */
  "\311\315\315\315\315\315\315\315\313\315\315\315\315\315\313\315\315\315\315\315\315\315\273\273"
  "\272\376 \371 \371 \371\272\371 \371 \371\272\371 \371 \371 \376\272\272"
  "\272 \322 \322 \311\315\274 \306\315\265 \310\315\273 \322 \322 \272\272"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \272 \320 \310\315\265 \306\315\265 \306\315\274 \320 \272 \272\272"
  "\272\371\272\371 \371 \371 \371 \371 \371 \371 \371 \371\272\371\272\272"
  "\274 \320 \0 \0 \306\315\315\315\315\315\265 \0 \0 \320 \310\310"
  " \371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371  "
  "\313\315\273 \0 \322 \0 \306\315\265 \0 \322 \0 \311\315\313\313"
  "\272\371\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\371\272\272"
  "\272 \310\315\265 \320 \311\315\315\360\315\315\273 \320 \306\315\274 \272\272"
  "\272\371 \371 \371 \371\272     \272\371 \371 \371 \371\272\272"
  "\272 \0 \306\315\265 \310\315\315\315\315\315\274 \306\315\265 \0 \272\272"
  "\272\371 \371 \371 \371 \371   \371 \371 \371 \371 \371\272\272"
  "\272 \0 \0 \0 \0 \306\315\265 \0 \0 \0 \0 \272\272"
  "\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\272"
  "\272 \322 \311\315\265 \306\315\315\315\315\315\265 \306\315\273 \322 \272\272"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \272 \272 \311\315\265 \306\315\265 \306\315\273 \272 \272 \272\272"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \320 \320 \320 \0 \306\315\265 \0 \320 \320 \320 \272\272"
  "\272\376 \371 \371 \371 \371   \371 \371 \371 \371 \376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x2 */
  "\311\315\315\315\313\315\315\315\315\315\315\315\315\315\315\315\315\315\313\315\315\315\273\273"
  "\272\371 \371\272\371 \371 \371 \376 \371 \371 \371\272\371 \371\272\272"
  "\272 \322 \272 \322 \0 \306\315\265 \0 \322 \272 \322 \272\272"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \272 \272 \310\315\265 \306\315\265 \306\315\274 \272 \272 \272\272"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \320 \310\315\265 \306\315\315\315\315\315\265 \306\315\274 \320 \272\272"
  "\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\272"
  "\272 \0 \0 \322 \0 \306\315\265 \0 \322 \0 \0 \272\272"
  "\272\376 \371 \371\272\371 \371 \371 \371 \371\272\371 \371 \376\272\272"
  "\312\315\265 \0 \320 \311\315\315\360\315\315\273 \320 \0 \306\315\312\312"
  " \371 \371 \371 \371\272     \272\371 \371 \371 \371  "
  "\273 \0 \311\315\265 \310\315\315\315\315\315\274 \306\315\273 \0 \311\311"
  "\272\371 \371\272\371 \371 \371   \371 \371 \371\272\371 \371\272\272"
  "\272 \0 \320 \0 \0 \306\315\265 \0 \0 \320 \0 \272\272"
  "\272\371 \371 \371 \371 \371 \376 \371 \371 \371 \371 \371\272\272"
  "\272 \322 \311\315\265 \306\315\315\315\315\315\265 \306\315\273 \322 \272\272"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \272 \272 \311\315\265 \306\315\265 \306\315\273 \272 \272 \272\272"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \320 \320 \320 \0 \306\315\265 \0 \320 \320 \320 \272\272"
  "\272\371 \371 \371 \371 \371   \371 \371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x3 */
  "\315\315\315\315\313\315\315\315\315\315\315\315\315\315\315\315\315\315\313\315\315\315\315\315"
  " \371 \371\272\371 \371 \371 \371 \371 \371 \371\272\371 \371  "
  "\273 \322 \272 \311\315\265 \306\315\265 \306\315\273 \272 \322 \311\311"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \272 \272 \310\315\265 \306\315\265 \306\315\274 \272 \272 \272\272"
  "\272\371\272\371\272\371 \371 \371 \371 \371 \371 \371\272\371\272\371\272\272"
  "\272 \320 \310\315\265 \306\315\315\315\315\315\265 \306\315\274 \320 \272\272"
  "\272\371 \371 \376 \371 \371 \371 \371 \371 \376 \371 \371\272\272"
  "\272 \322 \0 \322 \0 \306\315\265 \0 \322 \0 \322 \272\272"
  "\272\371\272\371 \371\272\371 \371 \371 \371 \371\272\371 \371\272\371\272\272"
  "\272 \310\315\265 \320 \311\315\315\360\315\315\273 \320 \306\315\274 \272\272"
  "\272\371 \371 \371 \371\272     \272\371 \371 \371 \371\272\272"
  "\272 \0 \311\315\265 \310\315\315\315\315\315\274 \306\315\273 \0 \272\272"
  "\272\371 \371\272\371 \371 \371   \371 \371 \371\272\371 \371\272\272"
  "\314\315\265 \320 \0 \0 \306\315\265 \0 \0 \320 \306\315\271\271"
  "\272\371 \371 \371 \371 \371 \371 \371 \371 \371 \371 \371\272\272"
  "\272 \322 \311\315\265 \306\315\315\315\315\315\265 \306\315\273 \322 \272\272"
  "\272\371\272\371\272\376 \371 \371 \371 \371 \371 \376\272\371\272\371\272\272"
  "\272 \272 \272 \311\315\265 \306\315\265 \306\315\273 \272 \272 \272\272"
  "\272\371\272\371\272\371\272\371 \371 \371 \371 \371\272\371\272\371\272\371\272\272"
  "\272 \320 \310\315\274 \0 \306\315\265 \0 \310\315\274 \320 \272\272"
  "\272\371 \371 \371 \371 \371   \371 \371 \371 \371 \371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
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
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
