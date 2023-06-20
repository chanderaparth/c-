/* Manually remove node from linked list */

#include <stdio.h>
#include <conio.h>

int main() {
  struct xyz {
    int a;
    struct xyz *p;
  };

  struct xyz x,y,z;
  struct xyz *list = &x;

  x.a = 10;
  y.a = 20;
  z.a = 30;

  x.p = &y;
  y.p = &z;
  z.p = NULL;

  x.p = &z;
  y.p = NULL;

  free(y);

  clrscr();
  while(list != NULL) {
    printf("%d\n", list->a);
    list = list->p;
  }
  getch();
  return 0;
}