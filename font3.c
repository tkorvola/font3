#include <stdio.h>

#include "font3.h"

int
main(int argc, char ** argv)
{
  for (int row = 0; row < sizeof(Zfont3) / 8; ++row) {
    const unsigned c = row + 32, r8 = 8 * row;
    printf("%u = %#o = %#x:\n", c, c, c);
    
    for (int i = r8; i < r8 + 8; ++i) {
      for (byte p = Zfont3[i]; p; p <<= 1)
        putchar(p & 0x80 ? '#' : ' ');
      putchar('\n');
    }
  }
  return 0;
}
