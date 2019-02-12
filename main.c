#include <stdio.h>
#include "drawingFile.h"
#include "lissajouxFile.h"
#include "butterfly.h"
#include "finalCredits.h"

int main(void)
{

  char screen[MAX_X][MAX_Y];
  drawLissajoux(screen);
  drawButterfly(screen);
  finalCredits(screen);

  return 0;
}
