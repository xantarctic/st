/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c2023", /* black   */
  [1] = "#c7ae95", /* red     */
  [2] = "#95c7ae", /* green   */
  [3] = "#aec795", /* yellow  */
  [4] = "#ae95c7", /* blue    */
  [5] = "#c795ae", /* magenta */
  [6] = "#95aec7", /* cyan    */
  [7] = "#c7ccd1", /* white   */

  /* 8 bright colors */
  [8]  = "#747c84", /* black   */
  [9]  = "#c7ae95", /* red     */
  [10] = "#95c7ae", /* green   */
  [11] = "#aec795", /* yellow  */
  [12] = "#ae95c7", /* blue    */
  [13] = "#c795ae", /* magenta */
  [14] = "#95aec7", /* cyan    */
  [15] = "#f3f4f5", /* white   */

  /* special colors */
  [256] = "#1c2023", /* background */
  [257] = "#c7ccd1", /* foreground */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 257;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;

