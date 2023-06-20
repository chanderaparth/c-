/* Use of #define and const variables */

#include <stdio.h>
#include <conio.h>

#define val(x) (x <= 50 ? 50 : x)

const int i = 10;

int main() {

  clrscr();

  printf("Define: %d\n", val(20));
  printf("Const : %d\n", i);

  getch();
  return 0;
}