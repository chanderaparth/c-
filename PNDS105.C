/* Using functions with pointer to function */

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
  void (*pFun[])(int) = {fun1, fun2};

  clrscr();

  printf("1. First Function\n");
  printf("2. Second Function\n");

  printf("\nEnter your choice: ");

  scanf("%d", &ch);

  x = 30;

  pFun[ch-1](x);

  getch();
}
