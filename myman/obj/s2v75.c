int maze_n = 1;
int maze_w = 35;
int maze_h = 26;
int maze_flags = 0;
const char *maze_args = "READY=\"  READY! \" GAMEOVER=\"GAME OVER\" PLAYER1=\" PLAYER 1\" PLAYER2=\" PLAYER 2\" DIRHERO=UP RGHOST=13.5 ROGHOST=1 COGHOST=1 CGHOST=16.5 RFRUIT=13 CFRUIT=20.5 RTOP=9 RHERO=13 CHERO=26.5 RMSG=16 CMSG=12 RMSG2=9 CMSG2=12 ABOUT=\"Inspired by the MZ-700 and FM-7 game \'Pac-Man\' arranged by Dempa and Noboru G\"";
static const char builtin_mazefile_str[] = "lvl/pac700.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\304\304\304\304\304\304\304\304\304\277\0\0\263\263 \263\263\0\0\332\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\277\263\0\0\263\263 \263\263\0\0\263\332\304\304\304\304\277\332\304\304\304\304\277\263\263"
  "\263\263\371\371\376\371\371\371\371\371\263\263\0\0\263\263 \263\263\0\0\263\263\371\371\371\376\300\331\371\371\371\371\263\263\263"
  "\263\263\371\332\304\277\371\332\277\371\263\263\0\0\263\263 \263\263\0\0\263\263\371\332\277\371\371\371\371\332\277\371\263\263\263"
  "\263\263\371\263 \263\371\263\263\371\263\300\304\304\331\263 \263\300\304\304\331\263\371\263\300\304\304\277\371\263\263\371\263\263\263"
  "\263\263\371\300\304\331\371\300\331\371\300\304\304\304\304\331 \300\304\304\304\304\331\371\300\304\304\304\331\371\263\263\371\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\263\263\263"
  "\263\263\371\332\304\277\371\332\304\304\304\304\304\304\304\277\371\332\304\304\304\304\277\371\332\277\371\332\304\304\331\263\371\263\263\263"
  "\263\263\371\263 \263\371\300\304\304\277\332\304\304\304\331\371\300\304\304\304\304\331\371\263\263\371\300\304\304\277\263\371\263\263\263"
  "\263\263\371\263 \263\371\371\371\371\263\263         \371\371\371\263\263\371\371\371\371\263\263\371\263\263\263"
  "\263\263\371\300\304\331\371\332\277\371\300\331 \332\304\304\304\304\304\277 \332\277\371\300\331\371\332\277\371\300\331\371\263\263\263"
  "\263\263\371\371\371\371\371\263\263\371\371\371 \263\332\304\304\304\277\263 \263\263\371\371\371\371\263\263\371\371\371\371\263\263\263"
  "\263\300\304\304\304\277\371\263\300\304\304\277 ll   \263\263 \263\300\304\304\277\371\263\300\304\304\277\371\263\263\263"
  "\263\332\304\304\304\331\371\263\332\304\304\331 ll   \263\263 \263\332\304\304\331\371\263\332\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\263\263\371\371\371 \263\300\304\304\304\331\263 \263\263\371\371\371\371\263\263\371\371\371\371\263\263\263"
  "\263\263\371\332\304\277\371\300\331\371\332\277 \300\304\304\304\304\304\331 \300\331\371\332\277\371\300\331\371\332\277\371\263\263\263"
  "\263\263\371\263 \263\371\371\371\371\263\263         \371\371\371\263\263\371\371\371\371\263\263\371\263\263\263"
  "\263\263\371\263 \263\371\332\304\304\331\300\304\304\304\277\371\332\304\304\304\304\277\371\263\263\371\332\304\304\331\263\371\263\263\263"
  "\263\263\371\300\304\331\371\300\304\304\304\304\304\304\304\331\371\300\304\304\304\304\331\371\300\331\371\300\304\304\277\263\371\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\263\263\263"
  "\263\263\371\332\304\277\371\332\277\371\332\304\304\304\304\277 \332\304\304\304\304\277\371\332\304\304\304\277\371\263\263\371\263\263\263"
  "\263\263\371\263 \263\371\263\263\371\263\332\304\304\277\263 \263\332\304\304\277\263\371\263\332\304\304\331\371\263\263\371\263\263\263"
  "\263\263\371\300\304\331\371\300\331\371\263\263\0\0\263\263 \263\263\0\0\263\263\371\300\331\371\371\371\371\300\331\371\263\263\263"
  "\263\263\371\371\376\371\371\371\371\371\263\263\0\0\263\263 \263\263\0\0\263\263\371\371\371\376\332\277\371\371\371\371\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\331\263\0\0\263\263 \263\263\0\0\263\300\304\304\304\304\331\300\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\331\0\0\263\263 \263\263\0\0\300\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;