int maze_n = 1;
int maze_w = 30;
int maze_h = 33;
int maze_flags = 0;
const char *maze_args = "ROGHOST=1 COGHOST=1.5 RFRUIT=18.5 RTOP=12.5 RHERO=24.5 RMSG=18 CMSG=10 RMSG2=12 CMSG2=10 ABOUT=\"A maze inspired by Toru Iwatani/Namco\'s Pac-Man/Puckman (converted to match \'mspaccdi\')\"";
static const char builtin_mazefile_str[] = "lvl/paccdi.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "\332\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\277\277"
  "\263\332\304\304\304\304\304\304\304\304\304\304\304\304\277\332\304\304\304\304\304\304\304\304\304\304\304\304\277\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\277\371\332\304\304\304\277\371\263\263\371\332\304\304\304\277\371\332\304\304\277\371\263\263\263"
  "\263\263\376\263\306\265\263\371\263\306\315\265\263\371\263\263\371\263\306\315\265\263\371\263\306\265\263\376\263\263\263"
  "\263\263\371\300\304\304\331\371\300\304\304\304\331\371\300\331\371\300\304\304\304\331\371\300\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\277\371\332\277\371\332\304\304\304\304\304\304\277\371\332\277\371\332\304\304\277\371\263\263\263"
  "\263\263\371\300\304\304\331\371\263\263\371\300\304\304\277\332\304\304\331\371\263\263\371\300\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\371\371\263\263\263"
  "\263\300\304\304\304\304\277\371\263\300\304\304\277 \263\263 \332\304\304\331\263\371\332\304\304\304\304\331\263\263"
  "\300\304\304\304\304\277\263\371\263\332\304\304\331 \300\331 \300\304\304\277\263\371\263\332\304\304\304\304\331\331"
  "\0\0\0\0\0\263\263\371\263\263          \263\263\371\263\263\0\0\0\0\0\0"
  "\304\304\304\304\304\331\263\371\263\263 \332\304\277\377\377\332\304\277 \263\263\371\263\300\304\304\304\304\304\304"
  "\304\304\304\304\304\304\331\371\300\331 \263\332\331\377\377\300\277\263 \300\331\371\300\304\304\304\304\304\304\304"
  "       \371   \263\263    \263\263   \371        "
  "\304\304\304\304\304\304\277\371\332\277 \263\300\304\304\304\304\331\263 \332\277\371\332\304\304\304\304\304\304\304"
  "\304\304\304\304\304\277\263\371\263\263 \300\304\304\304\304\304\304\331 \263\263\371\263\332\304\304\304\304\304\304"
  "\0\0\0\0\0\263\263\371\263\263          \263\263\371\263\263\0\0\0\0\0\0"
  "\332\304\304\304\304\331\263\371\263\263 \332\304\304\304\304\304\304\277 \263\263\371\263\300\304\304\304\304\277\277"
  "\263\332\304\304\304\304\331\371\300\331 \300\304\304\277\332\304\304\331 \300\331\371\300\304\304\304\304\277\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\277\371\332\304\304\304\277\371\263\263\371\332\304\304\304\277\371\332\304\304\277\371\263\263\263"
  "\263\263\371\300\304\277\263\371\300\304\304\304\331\371\300\331\371\300\304\304\304\331\371\263\332\304\331\371\263\263\263"
  "\263\263\376\371\371\263\263\371\371\371\371\371\371\371  \371\371\371\371\371\371\371\263\263\371\371\376\263\263\263"
  "\263\300\304\277\371\263\263\371\332\277\371\332\304\304\304\304\304\304\277\371\332\277\371\263\263\371\332\304\331\263\263"
  "\263\332\304\331\371\300\331\371\263\263\371\300\304\304\277\332\304\304\331\371\263\263\371\300\331\371\300\304\277\263\263"
  "\263\263\371\371\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\371\371\263\263\263"
  "\263\263\371\332\304\304\304\304\331\300\304\304\277\371\263\263\371\332\304\304\331\300\304\304\304\304\277\371\263\263\263"
  "\263\263\371\300\304\304\304\304\304\304\304\304\331\371\300\331\371\300\304\304\304\304\304\304\304\304\331\371\263\263\263"
  "\263\263\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\263\263\263"
  "\263\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\263\263"
  "\300\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\304\331\331"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
