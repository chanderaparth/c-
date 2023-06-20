/* Returning structure from function */

#include <stdio.h>
#include <conio.h>

struct ms {
  int a;
  char b;
};

int main() {

  struct ms myfun(void);

  struct ms z;

  clrscr();

  z = myfun();

  printf("%d\n", z.a);
  printf("%c\n", z.b);

  getch();
  return 0;
}

struct ms myfun() {

  struct ms x;

  x.a = 15;
  x.b = 'b';

  return(x);
}