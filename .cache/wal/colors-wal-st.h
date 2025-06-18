const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#282828", /* black   */
  [1] = "#D95222", /* red     */
  [2] = "#E05D24", /* green   */
  [3] = "#DD6325", /* yellow  */
  [4] = "#E37226", /* blue    */
  [5] = "#C3912C", /* magenta */
  [6] = "#D5952C", /* cyan    */
  [7] = "#c5c5c5", /* white   */

  /* 8 bright colors */
  [8]  = "#725d5d",  /* black   */
  [9]  = "#D95222",  /* red     */
  [10] = "#E05D24", /* green   */
  [11] = "#DD6325", /* yellow  */
  [12] = "#E37226", /* blue    */
  [13] = "#C3912C", /* magenta */
  [14] = "#D5952C", /* cyan    */
  [15] = "#D4BE98", /* white   */

  /* special colors */
  [256] = "#282828", /* background */
  [257] = "#D4BE98", /* foreground */
  [258] = "#c5c5c5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
