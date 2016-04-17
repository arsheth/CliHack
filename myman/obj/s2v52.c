int maze_n = 1;
int maze_w = 39;
int maze_h = 25;
int maze_flags = 0;
const char *maze_args = "READY=\"READY!\" GAMEOVER=\" BYE! \" PLAYER1=\"ONE UP\" PLAYER2=\"TWO UP\" ROGHOST=1 RFRUIT=15.5 RTOP=9.5 RHERO=15.5 RMSG=7 CMSG=5 RMSG2=5 CMSG2=5 ABOUT=\"Inspired by Horizon 7 International\'s \'DemonLand Dream\' DOS game\"";
static const char builtin_mazefile_str[] = "lvl/demon.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\271 \314\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\311\315\315\315\315\315\315\315\315\315\315\273\371\311\315\315\265\371\306\315\315\273\371\311\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\311\315\315\315\315\315\315\273\371\320\371\320\371\311\315\315\315\273\371\320\371\320\371\311\315\315\315\315\315\315\273\371\320\371\272\272"
  "\272\371\371\371\272      \272\371\371\371\371\371\272   \272\371\371\371\371\371\272      \272\371\371\371\272\272"
  "\272\371\306\315\271      \314\315\315\315\315\315\271   \314\315\315\315\315\315\271      \314\315\265\371\272\272"
  "\272\371\371\371\272      \272\371\371\371\371\371\272   \272\371\371\371\371\371\272      \272\371\371\371\272\272"
  "\272\371\322\371\310\315\315\315\315\315\315\274\371\322\371\322\371\310\315\315\315\274\371\322\371\322\371\310\315\315\315\315\315\315\274\371\322\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\310\315\315\315\315\315\315\315\315\315\315\274\371\314\315\315\315\377\315\315\315\271\371\310\315\315\315\315\315\315\315\315\315\315\274\371\272\272"
  "\274\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272       \272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\310\310"
  " \371\306\315\315\315\315\315\315\315\315\315\315\265\371\272       \272\371\306\315\315\315\315\315\315\315\315\315\315\265\371  "
  "\273\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272       \272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\311\311"
  "\272\371\311\315\315\315\315\315\315\315\315\315\315\273\371\314\315\315\315\315\315\315\315\271\371\311\315\315\315\315\315\315\315\315\315\315\273\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\371\371\371 \371\371\371\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\320\371\311\315\315\315\315\315\315\273\371\320\371\320\371\311\315\315\315\273\371\320\371\320\371\311\315\315\315\315\315\315\273\371\320\371\272\272"
  "\272\371\371\371\272      \272\371\371\371\371\371\272   \272\371\371\371\371\371\272      \272\371\371\371\272\272"
  "\272\371\306\315\271      \314\315\315\315\315\315\271   \314\315\315\315\315\315\271      \314\315\265\371\272\272"
  "\272\371\371\371\272      \272\371\371\371\371\371\272   \272\371\371\371\371\371\272      \272\371\371\371\272\272"
  "\272\371\322\371\310\315\315\315\315\315\315\274\371\322\371\322\371\310\315\315\315\274\371\322\371\322\371\310\315\315\315\315\315\315\274\371\322\371\272\272"
  "\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\272\371\272\371\371\371\371\371\371\371\371\371\371\272\371\272\272"
  "\272\371\310\315\315\315\315\315\315\315\315\315\315\274\371\310\315\315\265\371\306\315\315\274\371\310\315\315\315\315\315\315\315\315\315\315\274\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\271 \314\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;