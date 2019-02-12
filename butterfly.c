#include <stdio.h>
#include <time.h>
#include <math.h>
#include "butterfly.h"


void drawButterfly(char screen[MAX_X][MAX_Y])
{
clearScreen(screen);

int x;
int y;
clock_t time;
clock_t delay=0.1*CLOCKS_PER_SEC;

for (double t=0; t<10; t+=0.01)
{
  x=(( sin(t)*(pow(M_E,cos(t)) -2*cos(4*t) -pow(sin(t/12),5) )  )+3)*floor(MAX_X/6);
  y=(( cos(t)*(pow(M_E,cos(t)) -2*cos(4*t) -pow(sin(t/12),5) )  )+2)*floor(MAX_Y/6);
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
