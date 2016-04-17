int maze_n = 1;
int maze_w = 17;
int maze_h = 17;
int maze_flags = 0;
const char *maze_args = " RGHOST=9.5 RTOP=8.5  RHERO=11.5  RFRUIT=11.5  RMSG=16 CMSG=5  RMSG2=0 CMSG2=5  GHOSTS=6 ROGHOST=0 COGHOST=1  READY=\"READY!!\" PLAYER1=\"PLAYER1\" PLAYER2=\"PLAYER2\" GAMEOVER=\"GOODBYE\"  ABOUT=\"Inspired by a game by 2007 students Niket Narang, Nikhil Garg, Omprakash Parganiha, Suhel Khan and Vinay V in K V Dinesha\'s IT 740 course at IIT-Bombay; it was in turn inspired by Brian Postma\'s \'Java PacMan\'/\'PacMan 3D\'\"";
static const char builtin_mazefile_str[] = "lvl/iitpac.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\311\315\315\315\315\315\315\315\313\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\272\371\371\371\371\371\371\371\272\272"
  "\272\371\306\265\371\306\265\371\320\371\306\265\371\306\265\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\306\273\371\322\371\306\313\265\371\322\371\311\265\371\272\272"
  "\272\371\371\272\371\272\371\371\272\371\371\272\371\272\371\371\272\272"
  "\310\273\371\320\371\314\265\371\320\371\306\271\371\320\371\311\274\274"
  "\0\272\371\371\371\272\371\371\371\371\371\272\371\371\371\272\0\0"
  "\311\274\371\007\371\320\371\311\360\273\371\320\371\007\371\310\273\273"
  "\272\371\371\371\371\371\371\272 \272\371\371\371\371\371\371\272\272"
  "\314\315\315\265\371\322\371\310\315\274\371\322\371\306\315\315\271\271"
  "\272\371\371\371\371\320\371\371 \371\371\320\371\371\371\371\272\272"
  "\272\371\306\265\371\371\371\306\313\265\371\371\371\306\265\371\272\272"
  "\272\371\371\371\371\322\371\371\272\371\371\322\371\371\371\371\272\272"
  "\272\376\306\315\315\312\265\371\320\371\306\312\315\315\265\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
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
;
