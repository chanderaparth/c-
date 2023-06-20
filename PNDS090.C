/* Use of pointers */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, *b;
  clrscr();

  printf("Enter your value :");
  scanf("%d", &a);

  b = &a;

  printf("Your value : %d\n", a);
  printf("Address of variable : %p\n", b);

  getch();
  return 0;
}