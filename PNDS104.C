/* Demo of using functions with switch */

#include <stdio.h>
#include <conio.h>

void fun1(int i) {

  printf("\n\nFirst function i: %d\n", i);

}

void fun2(int i) {

  printf("\n\nSecond function i: %d\n", i);

}

main() {
  int ch, x;

  clrscr();

  printf("1. First Function\n");
  printf("2. Second Function\n");

  printf("\nEnter your choice: ");

  scanf("%d", &ch);

  x = 30;

  switch(ch) {
    case 1:
      fun1(x);
      break;
    case 2:
      fun2(x);
      break;
  }
  getch();
}
