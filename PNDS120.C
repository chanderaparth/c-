/* Fill style and pattern */

#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
  int driver = 9;
  int mode = 2;

  initgraph(&driver, &mode, "..\\bgi");
  setcolor(4);

  circle(40,40,40);
  setfillstyle(EMPTY_FILL,1);
  floodfill(50,40,4);
  outtextxy(5,90,"EMPTY_FILL");

  circle(200,40,40);
  setfillstyle(SOLID_FILL,2);
  floodfill(210,40,4);
  outtextxy(165,90,"SOLID_FILL");

  circle(360,40,40);
  setfillstyle(LINE_FILL,3);
  floodfill(370,40,4);
  outtextxy(325,90,"LINE_FILL");

  circle(520,40,40);
  setfillstyle(LTSLASH_FILL,4);
  floodfill(530,40,4);
  outtextxy(485,90,"LTSLASH_FILL");

  circle(40,200,40);
  setfillstyle(SLASH_FILL,5);
  floodfill(50,200,4);
  outtextxy(5,250,"SLASH_FILL");

  circle(200,200,40);
  setfillstyle(BKSLASH_FILL,6);
  floodfill(210,200,4);
  outtextxy(160,250,"BKSLASH_FILL");

  circle(360,200,40);
  setfillstyle(LTBKSLASH_FILL,7);
  floodfill(370,200,4);
  outtextxy(315,250,"LTBKSLASH_FILL");

  circle(520,200,40);
  setfillstyle(HATCH_FILL,8);
  floodfill(530,200,4);
  outtextxy(485,250,"HATCH_FILL");

  circle(40,360,40);
  setfillstyle(XHATCH_FILL,9);
  floodfill(50,360,4);
  outtextxy(5,410,"XHATCH_FILL");

  circle(200,360,40);
  setfillstyle(INTERLEAVE_FILL,10);
  floodfill(210,360,4);
  outtextxy(150,410,"INTERLEAVE_FILL");

  circle(360,360,40);
  setfillstyle(WIDE_DOT_FILL,11);
  floodfill(370,360,4);
  outtextxy(315,410,"WIDE_D0T_FILL");

  circle(520,360,40);
  setfillstyle(CLOSE_DOT_FILL,12);
  floodfill(530,360,4);
  outtextxy(470,410,"CLOSE_DOT_FILL");

  getch();
  closegraph();
  return 0;
}