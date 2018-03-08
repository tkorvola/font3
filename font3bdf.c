#include <stdio.h>

#include "font3.h"

int
main(int argc, char ** argv)
{
  const int chars = sizeof(Zfont3) / 8;
  printf("STARTFONT 2.1\n"
         "FONT font3\n"
         "SIZE 8 72 72\n"
         "FONTBOUNDINGBOX 8 8 0 -2\n"
         "STARTPROPERTIES 2\n"
         "FONT_ASCENT 6\n"
         "FONT_DESCENT 2\n"
         "ENDPROPERTIES\n"
         "CHARS %d\n", chars);
  for (int row = 0; row < chars; ++row) {
    const unsigned c = row + 32, r8 = 8 * row;
    printf("STARTCHAR U+%04X\nENCODING %u\n", c, c);
    printf("SWIDTH 1000 0\n"
           "DWIDTH 8 0\n"
           "BBX 8 8 0 -2\n"
           "BITMAP\n");
    for (int i = r8; i < r8 + 8; ++i)
      printf("%02X\n", Zfont3[i]);
    printf("ENDCHAR\n");
  }
  printf("ENDFONT\n");
  return 0;
}
