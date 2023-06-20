/* Program for pre and post increment */

#include <stdio.h>
#include <conio.h>

int main() {
  int a=5, b;

  clrscr();

  b = a++;

  printf("\nA: %d\nB: %d\n", a, b);

  getch();
  return 0;
}