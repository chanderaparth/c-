/* Linked list automatic printing */

#include <stdio.h>
#include <conio.h>

int main() {
  struct xyz {
    int a;
    struct xyz *p;
  }x,y,z;

  struct xyz *list = &x;

  x.a = 10;
  y.a = 20;
  z.a = 30;

  x.p = &y;
  y.p = &z;
  z.p = NULL;

  clrscr();
  while(list != NULL) {
    printf("%d\n", list->a);
    list = list->p;
  }
  getch();
  return 0;
}