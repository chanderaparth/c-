/* Use of do while loop */

#include <stdio.h>
#include <conio.h>

int main() {
  int i=1;
  clrscr();

  do {
    printf("\t%d\n",i);
    i++;
  } while(i<=10);

  getch();
  return 0;
}