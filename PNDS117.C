#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
  char *string = "P.N.DATA.SYSTEM";
  int driver = VGA;
  int mode = 2;

  initgraph(&driver, &mode, "..\\bgi");
  outtextxy(250,210,string);
  getch();

  closegraph();
  return 0;
}