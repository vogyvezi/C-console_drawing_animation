#include <stdio.h>
#include <time.h>
#include <math.h>
#include "lissajouxFile.h"


void drawLissajoux(char screen[MAX_X][MAX_Y])
{
clearScreen(screen);

int x;
int y;
clock_t time;
clock_t delay=0.05*CLOCKS_PER_SEC;

for (double t=0; t<10; t+=0.01)
{
  x=((2*sin(2*t))+2)*floor(MAX_X/4);
  y=((3*cos(3*t))+3)*floor(MAX_Y/6);
  drawPunct(screen,x,y);
  drawScreen(screen);
  time=clock()+delay;
  while(clock()<time){};
}

delay=5*CLOCKS_PER_SEC;
time=clock()+delay;
while(clock()<time){};
clearScreen(screen);

}
