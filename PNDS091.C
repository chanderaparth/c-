/* Use of char pointer */

#include <stdio.h>
#include <conio.h>

int main() {
  char c, *cp;
  int  n, *np;
  cp = &c;
  np = &n;

  clrscr();

  printf("Enter any char and number :");
  scanf("%c %d", &c, &n);

  printf("\n\nc = %c \t cp = %c\n", c, *cp);
  printf("n = %d \t np = %d\n", n, *np);

  getch();
  return 0;
}