/* Exchange values with pointer and function */

#include <stdio.h>
#include <conio.h>

void exchange(point1, point2)
int *point1, *point2;
{
  int temp;
  temp = *point1;
  *point1 = *point2;
  *point2 = temp;
}

int main() {
  int i1 = 10, i2 =20, *p1 = &i1, *p2 = &i2;
  clrscr();
  printf("\n\ni1 = %d, i2 = %d\n", i1, i2);

  exchange(p1, p2);
  printf("i1 = %d, i2 = %d\n", i1, i2);

  getch();
  return 0;
}