#include<stdio.h>
#include<conio.h>

void exchange(p1, p2)
int *p1, *p2;
{
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}
int main() {
  int i1 = 10, i2 =20, *p1 = &i1, *p2 = &i2;
  clrscr();
  printf("\n\ni1 = %d, i2 = %d ? \n", i1, i2);

  exchange(p1, p2);
  printf("exchange = i1 = %d, i2 = %d\n", i1, i2);

  getch();
  return 0;
}