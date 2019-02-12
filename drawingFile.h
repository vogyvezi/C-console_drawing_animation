#ifndef DRAWING_FILE
#define DRAWING_FILE
#define MAX_X 50
#define MAX_Y 100
#define EMPTY  ' '
#define FILLED  '*'

void clearScreen(char screen[MAX_X][MAX_Y]);
void drawScreen(char screen[MAX_X][MAX_Y]);
void drawPunct(char screen[MAX_X][MAX_Y], int x, int y);


#endif
