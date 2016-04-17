int maze_n = 1;
int maze_w = 11;
int maze_h = 9;
int maze_flags = 0;
const char *maze_args = "  GHOSTS=2                 RGHOST=5.5  CGHOST=7.5  ROGHOST=2   COGHOST=0      RHERO=7.5   CHERO=1.5   RFRUIT=4.5  CFRUIT=5.5     RMSG=8      CMSG=1      RMSG2=0     CMSG2=1    PLAYER1=\" PLAYER 1\"      PLAYER2=\" PLAYER 2\"     GAMEOVER=\"GAME OVER\"        READY=\"  READY! \"        ABOUT=\"Inspired by Epoch-Man/Pocket Pac-Man/Mini Munchman (horizontal orientation)\"";
static const char builtin_mazefile_str[] = "lvl/pocket.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\315\315\315\315\313\315\315\315\315\315\315\315"
  "  \376v\272 \371 \371   "
  "\277\371\306\315\274\371\306\315\265\371\332\332"
  "\263 \371 \371 \371 \371 \263\263"
  "\263\371\311\315\265 \322\371\311\315\265\265"
  "\263 \272^\371\257\272 \272\256\263\263"
  "\331\371\320\371\322\371\320\371\320\376\300\300"
  "  \371 \272 \371 \371   "
  "\315\315\315\315\312\315\315\315\315\315\315\315"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0"
;
