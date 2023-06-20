/* Text style and color */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
  int driver = 9;
  int mode = 2;
  char *string = "P.N.DATA.SYSTEM";

  initgraph(&driver, &mode, "..\\bgi");
  setbkcolor(BLUE);
  setcolor(WHITE);

  settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
  outtextxy(10,10, string);

  setcolor(RED);
  settextstyle(TRIPLEX_FONT, HORIZ_DIR, 5);
  outtextxy(10,50,string);

  setcolor(YELLOW);
  settextstyle(SMALL_FONT, HORIZ_DIR, 5);
  outtextxy(10,100, string);

  setcolor(CYAN);
  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
  outtextxy(10,150, string);

  setcolor(GREEN);
  settextstyle(GOTHIC_FONT, HORIZ_DIR, 5);
  outtextxy(10,200, string);

  settextstyle(GOTHIC_FONT, VERT_DIR,5);
  outtextxy(460, 80, string);
  getch();

  closegraph();
  return 0;
}
