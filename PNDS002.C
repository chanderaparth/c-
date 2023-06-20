/* Use of library */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

  float x = 2.0, y = 8.0;

  clrscr();

  printf("%.2f ^ %.2f = %.2f\n", x, y, pow(x,y));

  getch();
  return 0;
}