/* Pointer and function */

#include <stdio.h>
#include <conio.h>

void test(pointer)
int *pointer;
{
  *pointer = 100;
}

int main() {
  int i= 50;

  clrscr();

  printf("\nValue of i before the call to test function = %d\n", i);

  test(&i);

  printf("\nValue of i after the call to test function = %d\n", i);

  getch();
  return 0;
}