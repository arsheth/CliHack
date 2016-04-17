int maze_n = 6;
int maze_w = 28;
int maze_h = 31;
int maze_flags = 1;
const char *maze_args = "FLIP_TO=2 WALL_COLORS=\"\\x07\\x03\\x04\\x09\\x0D\\x07\" MORTAR_COLORS=\"\\x0C\\x0F\\x0F\\x07\\x05\\x0C\" DOT_COLORS=\"\\x0F\\x0E\\x0C\\x0F\\x0F\\x0F\" ABOUT=\"Inspired by the Ms Pac Plus hack (author unknown)\"";
static const char builtin_mazefile_str[] = "lvl/mspp.txt";
const char *builtin_mazefile = builtin_mazefile_str;
const char *maze_data = 
/* 0x0 */
  "          \311\315\315\315\315\315\315\273           "
  "\311\315\315\315\315\315\315\315\315\315\274\371\371\371\371\371\371\310\315\315\315\315\315\315\315\315\315\273\273"
  "\272\376\371\371\371\371\371\371\371\371\371\371\332\304\304\277\371\371\371\371\371\371\371\371\371\371\376\272\272"
  "\272\371\332\304\277\371\332\304\277\371\332\304\331  \300\304\277\371\332\304\277\371\332\304\277\371\272\272"
  "\272\371\263 \263\371\263 \263\371\263      \263\371\263 \263\371\263 \263\371\272\272"
  "\272\371\300\304\331\371\300\304\331\371\263\332\304\304\304\304\277\263\371\300\304\331\371\300\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\300\331\371\371\371\371\300\331\371\371\371\371\371\371\371\371\371\272\272"
  "\272 \332\304\304\304\304\304\277\371\371\371\371\332\277\371\371\371\371\332\304\304\304\304\304\277 \272\272"
  "\272 \263\332\304\304\304\304\331 \332\304\304\331\300\304\304\277 \300\304\304\304\304\277\263 \272\272"
  "\272 \263\263\371\371\371   \263      \263   \371\371\371\263\263 \272\272"
  "\272 \263\263\371\332\304\304\277 \300\304\304\304\304\304\304\331 \332\304\304\277\371\263\263 \272\272"
  "\272 \263\263\371\300\304\304\331          \300\304\304\331\371\263\263 \272\272"
  "\272 \263\263\371\371\371   \311\315\315\360\360\315\315\273   \371\371\371\263\263 \272\272"
  "\272 \263\300\304\304\304\304\277 \272      \272 \332\304\304\304\304\331\263 \272\272"
  "\274 \300\304\304\277  \263 \272      \272 \263  \332\304\304\331 \310\310"
  "  \371\371\371\300\277 \263 \272      \272 \263 \332\331\371\371\371   "
  "\273 \332\277\371\371\300\304\331 \310\315\315\315\315\315\315\274 \300\304\331\371\371\332\277 \311\311"
  "\272 \263\300\277\371\371\371            \371\371\371\332\331\263 \272\272"
  "\272 \263 \300\304\277\371\332\304\304\277 \332\277 \332\304\304\277\371\332\304\331 \263 \272\272"
  "\272 \300\304\304\304\331\371\263  \263\371\300\331\371\263  \263\371\300\304\304\304\331 \272\272"
  "\272\371\371\371\371\371\371\371\300\304\277\263\371\371\371\371\263\332\304\331\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\371\371\263\300\304\304\304\304\331\263\371\371\371\332\304\304\304\277\371\272\272"
  "\272\371\300\304\304\277\300\304\277\371\300\304\304\304\304\304\304\331\371\332\304\331\332\304\304\331\371\272\272"
  "\272\371\371\371\371\300\304\277\263\371\371\371\371  \371\371\371\371\263\332\304\331\371\371\371\371\272\272"
  "\272\371\332\277\371\371\371\300\331\371\332\304\304\304\304\304\304\277\371\300\331\371\371\371\332\277\371\272\272"
  "\272\371\263\300\304\277\371\371\371\371\263\332\304\304\304\304\277\263\371\371\371\371\332\304\331\263\371\272\272"
  "\272\371\300\304\277\300\304\304\277\371\263\263\371\371\371\371\263\263\371\332\304\304\331\332\304\331\371\272\272"
  "\272\376\371\371\300\304\277 \263\371\263\263\371\332\277\371\263\263\371\263 \332\304\331\371\371\376\272\272"
  "\310\315\273\371\371\371\300\304\331\371\300\331\371\263\263\371\300\331\371\300\304\331\371\371\371\311\315\274\274"
  "  \310\315\273\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\311\315\274   "
  "    \310\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\274     "
/* 0x1 */
  "\311\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\304\304\277\371\263\263\371\332\277\371\263\263\371\332\304\304\304\304\304\277\371\272\272"
  "\272\371\300\304\304\304\304\304\331\371\263\263\371\263\263\371\263\263\371\300\304\304\304\304\304\331\371\272\272"
  "\272\376\371\371\371\371\371\371\371\371\263\263\371\263\263\371\263\263\371\371\371\371\371\371\371\371\376\272\272"
  "\323\304\304\304\304\277\371\332\277\371\263\263\371\263\263\371\263\263\371\332\277\371\332\304\304\304\304\275\275"
  "\304\304\304\304\304\331\371\263\263\371\263\263\371\263\263\371\263\263\371\263\263\371\300\304\304\304\304\304\304"
  "      \371\263\263\371\300\331\371\263\263\371\300\331\371\263\263\371       "
  "\304\304\304\304\304\277\371\263\263\371\371\371\371\263\263\371\371\371\371\263\263\371\332\304\304\304\304\304\304"
  "\326\304\304\304\304\331\371\263\300\304\304\277 \263\263 \332\304\304\331\263\371\300\304\304\304\304\267\267"
  "\272\371\371\371\371\371\371\263\332\304\304\331 \300\331 \300\304\304\277\263\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\263\263          \263\263\371\332\304\304\277\371\272\272"
  "\272\371\263  \263\371\263\263 \311\315\315\360\360\315\315\273 \263\263\371\263  \263\371\272\272"
  "\272\371\263  \263\371\263\263 \272      \272 \263\263\371\263  \263\371\272\272"
  "\272\371\263  \263\371\263\263 \272      \272 \263\263\371\263  \263\371\272\272"
  "\272\371\263  \263\371\263\263 \272      \272 \263\263\371\263  \263\371\272\272"
  "\272\371\300\304\304\331\371\300\331 \310\315\315\315\315\315\315\274 \300\331\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371              \371\371\371\371\371\371\272\272"
  "\323\304\304\277\371\332\304\304\304\304\304\277 \332\277 \332\304\304\304\304\304\277\371\332\304\304\275\275"
  "\304\304\304\331\371\263\332\304\304\304\304\331 \263\263 \300\304\304\304\304\277\263\371\300\304\304\304\304"
  "    \371\263\263\371\371\371\371\371 \263\263 \371\371\371\371\371\263\263\371     "
  "\304\304\304\277\371\263\263\371\332\304\304\304\304\331\300\304\304\304\304\277\371\263\263\371\332\304\304\304\304"
  "\326\304\304\331\371\263\263\371\300\304\304\304\304\304\304\304\304\304\304\331\371\263\263\371\300\304\304\267\267"
  "\272\371\371\371\371\263\263\371\371\371\371\371\371  \371\371\371\371\371\371\263\263\371\371\371\371\272\272"
  "\272\371\332\277\371\263\300\304\304\304\304\277\371\332\277\371\332\304\304\304\304\331\263\371\332\277\371\272\272"
  "\272\371\263\263\371\263\332\304\304\304\304\331\371\263\263\371\300\304\304\304\304\277\263\371\263\263\371\272\272"
  "\272\376\263\263\371\263\263\371\371\371\371\371\371\263\263\371\371\371\371\371\371\263\263\371\263\263\376\272\272"
  "\272\371\263\263\371\263\263\371\332\304\304\277\371\263\263\371\332\304\304\277\371\263\263\371\263\263\371\272\272"
  "\272\371\300\331\371\300\331\371\300\304\304\331\371\263\263\371\300\304\304\331\371\300\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x2 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\332\304\304\277\371\263\263\371\332\304\304\277\371\332\304\304\304\277\371\272\272"
  "\272\376\300\304\304\304\331\371\300\304\304\331\371\263\263\371\300\304\304\331\371\300\304\304\304\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\300\331\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\332\304\304\277\371\371\371\371\332\304\304\277\371\332\304\304\304\277\371\272\272"
  "\272\371\300\304\304\304\331\371\300\304\304\331\371\332\277\371\300\304\304\331\371\300\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277 \332\277 \332\304\304\331\300\304\304\277 \332\277 \332\304\304\277\371\272\272"
  "\272\371\263  \263 \263\263 \263      \263 \263\263 \263  \263\371\272\272"
  "\274\371\300\304\304\331 \300\331 \300\304\304\304\304\304\304\331 \300\331 \300\304\304\331\371\310\310"
  " \371\371\371\371\371                \371\371\371\371\371  "
  "\304\304\304\304\277\371\332\304\277 \311\315\315\360\360\315\315\273 \332\304\277\371\332\304\304\304\304\304"
  "\326\304\304\304\331\371\300\304\331 \272      \272 \300\304\331\371\300\304\304\304\267\267"
  "\272\371\371\371\371\371    \272      \272    \371\371\371\371\371\272\272"
  "\272\371\332\304\304\277 \332\277 \272      \272 \332\277 \332\304\304\277\371\272\272"
  "\272\371\263  \263 \263\263 \310\315\315\315\315\315\315\274 \263\263 \263  \263\371\272\272"
  "\272\371\263  \263 \263\263          \263\263 \263  \263\371\272\272"
  "\272\371\263  \263 \263\263 \332\304\304\304\304\304\304\277 \263\263 \263  \263\371\272\272"
  "\274\371\300\304\304\331 \300\331 \300\304\304\304\304\304\304\331 \300\331 \300\304\304\331\371\310\310"
  " \371\371\371\371\371\371\371            \371\371\371\371\371\371\371  "
  "\304\304\304\304\304\304\277\371\332\277 \332\304\304\304\304\277 \332\277\371\332\304\304\304\304\304\304\304"
  "\326\304\304\304\304\304\331\371\263\263 \300\304\304\304\304\331 \263\263\371\300\304\304\304\304\304\267\267"
  "\272\376\371\371\371\371\371\371\300\331        \300\331\371\371\371\371\371\371\376\272\272"
  "\272\371\332\277\371\332\277\371\371\371\371\332\304\304\304\304\277\371\371\371\371\332\277\371\332\277\371\272\272"
  "\272\371\263\263\371\263\263\371\332\277\371\300\304\304\304\304\331\371\332\277\371\263\263\371\263\263\371\272\272"
  "\272\371\263\263\371\263\263\371\263\263\371\371\371  \371\371\371\263\263\371\263\263\371\263\263\371\272\272"
  "\272\371\263\263\371\263\263\371\263\300\304\277\371\332\277\371\332\304\331\263\371\263\263\371\263\263\371\272\272"
  "\272\371\300\331\371\300\331\371\300\304\304\331\371\263\263\371\300\304\304\331\371\300\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x3 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\277\371\332\304\304\277\371\332\304\304\304\304\304\304\277\371\332\304\304\277\371\332\277\371\272\272"
  "\272\376\263\263\371\263  \263\371\263\332\304\304\304\304\277\263\371\263  \263\371\263\263\376\272\272"
  "\272\371\263\263\371\300\304\304\331\371\263\263\371\371\371\371\263\263\371\300\304\304\331\371\263\263\371\272\272"
  "\272\371\263\263\371\371\371\371\371\371\263\263\371\332\277\371\263\263\371\371\371\371\371\371\263\263\371\272\272"
  "\272\371\263\300\304\277\371\332\277\371\263\263\371\263\263\371\263\263\371\332\277\371\332\304\331\263\371\272\272"
  "\272\371\300\304\304\331\371\263\263\371\300\331\371\263\263\371\300\331\371\263\263\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\323\304\277\371\332\304\304\331\263 \332\304\304\331\300\304\304\277 \263\300\304\304\277\371\332\304\275\275"
  "  \263\371\300\304\304\277\263 \300\304\304\304\304\304\304\331 \263\332\304\304\331\371\263   "
  "  \263\371\371\371\371\263\263          \263\263\371\371\371\371\263   "
  "  \263 \332\277\371\263\263 \311\315\315\360\360\315\315\273 \263\263\371\332\277 \263   "
  "  \263 \263\263\371\300\331 \272      \272 \300\331\371\263\263 \263   "
  "\304\304\331 \263\263\371   \272      \272   \371\263\263 \300\304\304\304"
  "    \263\263\371\332\277 \272      \272 \332\277\371\263\263     "
  "\304\304\304\304\331\263\371\263\263 \310\315\315\315\315\315\315\274 \263\263\371\263\300\304\304\304\304\304"
  "  \332\304\304\331\371\263\263          \263\263\371\300\304\304\277   "
  "  \263\371\371\371\371\263\300\304\304\277 \332\277 \332\304\304\331\263\371\371\371\371\263   "
  "  \263\371\332\277\371\300\304\304\304\331 \263\263 \300\304\304\304\331\371\332\277\371\263   "
  "  \263\371\263\263\371\371\371\371   \263\263   \371\371\371\371\263\263\371\263   "
  "  \263\371\263\300\304\304\277\371\332\304\304\331\300\304\304\277\371\332\304\304\331\263\371\263   "
  "\326\304\331\371\300\304\304\304\331\371\300\304\304\304\304\304\304\331\371\300\304\304\304\331\371\300\304\267\267"
  "\272\371\371\371\371\371\371\371\371\371        \371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\332\277\371\332\304\304\304\304\304\304\277\371\332\277\371\332\304\304\277\371\272\272"
  "\272\371\263\332\304\331\371\263\263\371\300\304\304\304\304\304\304\331\371\263\263\371\300\304\277\263\371\272\272"
  "\272\371\263\263\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\263\263\371\272\272"
  "\272\376\263\263\371\332\304\331\300\304\304\277\371\332\277\371\332\304\304\331\300\304\277\371\263\263\376\272\272"
  "\272\371\300\331\371\300\304\304\304\304\304\331\371\263\263\371\300\304\304\304\304\304\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x4 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\270\325\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\332\304\304\277\371\263\263\371\332\304\304\277\371\332\304\304\304\277\371\272\272"
  "\272\376\300\304\304\304\331\371\300\304\304\331\371\263\263\371\300\304\304\331\371\300\304\304\304\331\376\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\300\331\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\304\277\371\332\304\304\277\371\371\371\371\332\304\304\277\371\332\304\304\304\277\371\272\272"
  "\272\371\300\304\304\304\331\371\300\304\304\331\371\332\277\371\300\304\304\331\371\300\304\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277 \332\277 \332\304\304\331\300\304\304\277 \332\277 \332\304\304\277\371\272\272"
  "\272\371\263  \263 \263\263 \263      \263 \263\263 \263  \263\371\272\272"
  "\274\371\300\304\304\331 \300\331 \300\304\304\304\304\304\304\331 \300\331 \300\304\304\331\371\310\310"
  " \371\371\371\371\371                \371\371\371\371\371  "
  "\304\304\304\304\277\371\332\304\277 \311\315\315\360\360\315\315\273 \332\304\277\371\332\304\304\304\304\304"
  "\326\304\304\304\331\371\300\304\331 \272      \272 \300\304\331\371\300\304\304\304\267\267"
  "\272\371\371\371\371\371    \272      \272    \371\371\371\371\371\272\272"
  "\272\371\332\304\304\277 \332\277 \272      \272 \332\277 \332\304\304\277\371\272\272"
  "\272\371\263  \263 \263\263 \310\315\315\315\315\315\315\274 \263\263 \263  \263\371\272\272"
  "\272\371\263  \263 \263\263          \263\263 \263  \263\371\272\272"
  "\272\371\263  \263 \263\263 \332\304\304\304\304\304\304\277 \263\263 \263  \263\371\272\272"
  "\274\371\300\304\304\331 \300\331 \300\304\304\304\304\304\304\331 \300\331 \300\304\304\331\371\310\310"
  " \371\371\371\371\371\371\371            \371\371\371\371\371\371\371  "
  "\304\304\304\304\304\304\277\371\332\277 \332\304\304\304\304\277 \332\277\371\332\304\304\304\304\304\304\304"
  "\326\304\304\304\304\304\331\371\263\263 \300\304\304\304\304\331 \263\263\371\300\304\304\304\304\304\267\267"
  "\272\376\371\371\371\371\371\371\300\331        \300\331\371\371\371\371\371\371\376\272\272"
  "\272\371\332\277\371\332\277\371\371\371\371\332\304\304\304\304\277\371\371\371\371\332\277\371\332\277\371\272\272"
  "\272\371\263\263\371\263\263\371\332\277\371\300\304\304\304\304\331\371\332\277\371\263\263\371\263\263\371\272\272"
  "\272\371\263\263\371\263\263\371\263\263\371\371\371  \371\371\371\263\263\371\263\263\371\263\263\371\272\272"
  "\272\371\263\263\371\263\263\371\263\300\304\277\371\332\277\371\332\304\331\263\371\263\263\371\263\263\371\272\272"
  "\272\371\300\331\371\300\331\371\300\304\304\331\371\263\263\371\300\304\304\331\371\300\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
/* 0x5 */
  "\311\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\315\273\273"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\277\371\332\304\304\277\371\332\304\304\304\304\304\304\277\371\332\304\304\277\371\332\277\371\272\272"
  "\272\376\263\263\371\263  \263\371\263\332\304\304\304\304\277\263\371\263  \263\371\263\263\376\272\272"
  "\272\371\263\263\371\300\304\304\331\371\263\263\371\371\371\371\263\263\371\300\304\304\331\371\263\263\371\272\272"
  "\272\371\263\263\371\371\371\371\371\371\263\263\371\332\277\371\263\263\371\371\371\371\371\371\263\263\371\272\272"
  "\272\371\263\300\304\277\371\332\277\371\263\263\371\263\263\371\263\263\371\332\277\371\332\304\331\263\371\272\272"
  "\272\371\300\304\304\331\371\263\263\371\300\331\371\263\263\371\300\331\371\263\263\371\300\304\304\331\371\272\272"
  "\272\371\371\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\263\263\371\371\371\371\371\371\272\272"
  "\323\304\277\371\332\304\304\331\263 \332\304\304\331\300\304\304\277 \263\300\304\304\277\371\332\304\275\275"
  "  \263\371\300\304\304\277\263 \300\304\304\304\304\304\304\331 \263\332\304\304\331\371\263   "
  "  \263\371\371\371\371\263\263          \263\263\371\371\371\371\263   "
  "  \263 \332\277\371\263\263 \311\315\315\360\360\315\315\273 \263\263\371\332\277 \263   "
  "  \263 \263\263\371\300\331 \272      \272 \300\331\371\263\263 \263   "
  "\304\304\331 \263\263\371   \272      \272   \371\263\263 \300\304\304\304"
  "    \263\263\371\332\277 \272      \272 \332\277\371\263\263     "
  "\304\304\304\304\331\263\371\263\263 \310\315\315\315\315\315\315\274 \263\263\371\263\300\304\304\304\304\304"
  "  \332\304\304\331\371\263\263          \263\263\371\300\304\304\277   "
  "  \263\371\371\371\371\263\300\304\304\277 \332\277 \332\304\304\331\263\371\371\371\371\263   "
  "  \263\371\332\277\371\300\304\304\304\331 \263\263 \300\304\304\304\331\371\332\277\371\263   "
  "  \263\371\263\263\371\371\371\371   \263\263   \371\371\371\371\263\263\371\263   "
  "  \263\371\263\300\304\304\277\371\332\304\304\331\300\304\304\277\371\332\304\304\331\263\371\263   "
  "\326\304\331\371\300\304\304\304\331\371\300\304\304\304\304\304\304\331\371\300\304\304\304\331\371\300\304\267\267"
  "\272\371\371\371\371\371\371\371\371\371        \371\371\371\371\371\371\371\371\371\272\272"
  "\272\371\332\304\304\277\371\332\277\371\332\304\304\304\304\304\304\277\371\332\277\371\332\304\304\277\371\272\272"
  "\272\371\263\332\304\331\371\263\263\371\300\304\304\304\304\304\304\331\371\263\263\371\300\304\277\263\371\272\272"
  "\272\371\263\263\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\263\263\371\272\272"
  "\272\376\263\263\371\332\304\331\300\304\304\277\371\332\277\371\332\304\304\331\300\304\277\371\263\263\376\272\272"
  "\272\371\300\331\371\300\304\304\304\304\304\331\371\263\263\371\300\304\304\304\304\304\331\371\300\331\371\272\272"
  "\272\371\371\371\371\371\371\371\371\371\371\371\371\263\263\371\371\371\371\371\371\371\371\371\371\371\371\272\272"
  "\310\315\315\315\315\315\315\315\315\315\315\315\315\276\324\315\315\315\315\315\315\315\315\315\315\315\315\274\274"
;
const char *maze_color_data = 
/* 0x0 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x1 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x2 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x3 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x4 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
/* 0x5 */
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
  "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
;
