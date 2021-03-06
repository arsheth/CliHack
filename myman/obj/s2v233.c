int maze_n = 1;
int maze_w = 15;
int maze_h = 15;
int maze_flags = 0;
const char *maze_args = "   RHERO=5.5   CHERO=7.5    RTOP=8.5   RGHOST=7.5  CGHOST=7.5  ROGHOST=-1  COGHOST=1   RFRUIT=9.5  CFRUIT=7.5     RMSG=14      CMSG=9    RMSG2=14     CMSG2=1     READY=\"READY\"   PLAYER1=\"P ONE\"   PLAYER2=\"P TWO\"  GAMEOVER=\" BYE \"     ABOUT=\"Inspired by \'Miss PacMan\' from gdahl-games.com (compact layout)\"";
static const char builtin_mazefile_str[] = "lvl/misstiny.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\0\311\315\315\315\315\273\0\311\315\315\315\315\273\0\0"
  "\0\272\376\371\371\371\310\315\274\371\371\371\376\272\0\0"
  "\0\272\371\332\277\371\371\371\371\371\332\277\371\272\0\0"
  "\311\274\371\300\324\315\273\371\311\315\276\331\371\310\273\273"
  "\272\371\371\371\371\371\320\371\320\371\371\371\371\371\272\272"
  "\272\371\311\265\371\371\371 \371\371\371\306\273\371\272\272"
  "\272\371\272\371\371\311\315\315\315\273\371\371\272\371\272\272"
  "\274\371\320\371\371\272   \272\371\371\320\371\310\310"
  " \371\371\371\306\312\265 \306\312\265\371\371\371  "
  "\315\315\273\371\371\371\371\371\371\371\371\371\311\315\315\315"
  "\311\315\274\371\007\371\322\371\322\371\007\371\310\315\273\273"
  "\272\371\371\371\371\371\272\371\272\371\371\371\371\371\272\272"
  "\272\371\306\315\265\371\320\371\320\371\306\315\265\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
