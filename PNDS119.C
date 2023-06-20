/* Draw a circle */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
  int driver = 9;
  int mode = 2;
  int x_axis = 320, y_axis = 240, radius = 0;

  initgraph(&driver, &mode, "..\\bgi");

  circle(10,10,10);
  circle(600,10,10);
  circle(10,460,10);
  circle(600,460,10);

  for(radius=1; radius<200; radius++) {
    circle(x_axis,y_axis,radius);
    setcolor(radius);
  }

  getch();

  closegraph();
  return 0;
}