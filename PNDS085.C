/* Use of typedef */

#include <stdio.h>
#include <conio.h>

struct ms {
  int a;
  char b;
};

typedef struct ms mystr;

int main() {

  mystr myfun(void);

  mystr z;

  clrscr();

  z = myfun();

  printf("%d\n", z.a);
  printf("%c\n", z.b);

  getch();
  return 0;
}

mystr myfun() {

  mystr x;

  x.a = 15;
  x.b = 'b';

  return(x);
}