/* Program for atoi, atof and atol */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  int inum;
  float fnum;
  long int lnum;
  char *string ="65";

  clrscr();
  inum = atoi(string);
  printf("%d\n", inum + 5);

  fnum = atof(string);
  printf("%.2f\n", fnum + 5);

  lnum = atol(string);
  printf("%ld\n", lnum + 5);

  getch();
  return 0;
}