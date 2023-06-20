/* Program for printing 1 to 10 numbers with While statement */

#include <stdio.h>
#include <conio.h>

int main() {
  int i=1;
  clrscr();

  while(i<=10) {
    printf("\t%d\n",i);
    i++;
  }
  getch();
  return 0;
}