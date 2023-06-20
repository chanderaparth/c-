/* Creating Linked list using pointer with structure */

#include <stdio.h>
#include <conio.h>

int main() {
  struct xyz {
    int a;
    struct xyz *p;
  }x,y,z;

  x.a = 10;
  y.a = 20;
  z.a = 30;

  x.p = &y;
  y.p = &z;
  z.p = NULL;

  clrscr();
  printf("x.a = %d\n", x.a);
  printf("x.p->a = %d\n", x.p->a);
  printf("y.p->a = %d\n", y.p->a);
  printf("z.p->a = %d\n", z.p->a);

  getch();
  return 0;
}