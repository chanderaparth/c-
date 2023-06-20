/* Manually adding node between two nodes in linked list */

#include <stdio.h>
#include <conio.h>

int main() {
  struct xyz {
    int a;
    struct xyz *p;
  };

  struct xyz x,y,z,k;
  struct xyz *list = &x;

  x.a = 10;
  y.a = 20;
  z.a = 30;

  x.p = &y;
  y.p = &z;
  z.p = NULL;

  k.a = 40;
  x.p = &k;
  k.p = &y;

  clrscr();
  while(list != NULL) {
    printf("%d\n", list->a);
    list = list->p;
  }
  getch();
  return 0;
}