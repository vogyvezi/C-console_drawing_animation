#include "drawingFile.h"
#include <stdio.h>

void clearScreen(char screen[MAX_X][MAX_Y])
{
  for (register int x=0; x<MAX_X; ++x)
  {
    for (register int y=0; y<MAX_Y; ++y)
    {
      screen[x][y]=EMPTY;
    }
  }
}


void drawScreen(char screen[MAX_X][MAX_Y])
{

  for (register int x=0; x<MAX_X; ++x)
  {
    for (register int y=0; y<MAX_Y; ++y)
    {
      putchar(screen[x][y]);
    }
  putchar('\n');
  }

}

void drawPunct(char screen[MAX_X][MAX_Y], int x, int y)
{
  if(x>0 && y>0 && x<MAX_X && y<MAX_Y)
    screen[x][y]=FILLED;
}
