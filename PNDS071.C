/* Use of union */

#include <stdio.h>
#include <conio.h>

int main() {
  union mixed {
    char a;
    int n;
  }data;

  clrscr();

  printf("enter your alfabet :");
  scanf("%c", &data.a);

  printf("enter your number :");
  scanf("%d", &data.n);

  printf("\n%c", data.a);
  printf("\n%d", data.n);

  getch();
  return 0;
}