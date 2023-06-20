/* Use of local variable */

#include <stdio.h>
#include <conio.h>

int main() {

  int i;

  clrscr();

  for(i=0; i<5; i++) {
    int A=10;
    printf("A=%d\n", A);
  }

  printf("A=%d\n", A);

  getch();
  return 0;
}