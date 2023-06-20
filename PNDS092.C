/* String data input with array */

#include <stdio.h>
#include <conio.h>

int main() {
  char title[10];

  clrscr();

  printf("Enter your name : ");
  scanf("%s",title);

  printf("%s",title);

  getch();
  return 0;
}