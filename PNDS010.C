/* Use of static variable */

#include <stdio.h>
#include <conio.h>

int main() {
  int i;

  clrscr();

  for(i=0; i<5; i++) {
    int b=5;
    b++;
    printf("b = %d\n", b);
  }
  getch();
  return 0;
}