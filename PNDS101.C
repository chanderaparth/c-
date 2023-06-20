/* Use of Pointers with arrays and function */

#include <stdio.h>
#include <conio.h>

int array_sum(a,n)
int a[], n;
{
  int sum =0, *p;
  int *end = a + n;
  clrscr();

  for(p=a; p<end; ++p)
      sum += *p;

  return(sum);
}

int main() {
  int x;
  static int values[5];
  clrscr();

  printf("Enter any five values for array\n");
  for(x=0; x<5; x++)
      scanf("%d", &values[x]);

  printf("The sum is %d\n", array_sum(values, 5));

  getch();
  return 0;
}