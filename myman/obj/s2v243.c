int maze_n = 1;
int maze_w = 9;
int maze_h = 11;
int maze_flags = 0;
const char *maze_args = "  GHOSTS=2                 CGHOST=5.5  RGHOST=3.5  COGHOST=2   ROGHOST=0      CHERO=7.5   RHERO=9.5   CFRUIT=4.5  RFRUIT=5.5     CMSG=0      RMSG=10     CMSG2=0     RMSG2=0    PLAYER1=\" PLAYER 1\"      PLAYER2=\" PLAYER 2\"     GAMEOVER=\"GAME OVER\"        READY=\"  READY! \"        ABOUT=\"Inspired by Epoch-Man/Pocket Pac-Man/Mini Munchman (vertical orientation)\"";
static const char builtin_mazefile_str[] = "lvl/epochman.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\272 \310\315\313\315\274 \272\272"
  "\272 \371 \272v\376 \272\272"
  "\272\371\322\371\310\315\265\371\272\272"
  "\272 \272 \371 \371 \272\272"
  "\272\371\320\371\306\315\265\371\272\272"
  "\272 \371  ^\371 \272\272"
  "\314\315\273\371\322\371\306\315\271\271"
  "\272\257\272 \272\256\371 \272\272"
  "\272\376\320\371\310\315\265\371\272\272"
  "\272 \371 \371 \371 \272\272"
  "\272 \311\315\315\315\273 \272\272"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0"
;
