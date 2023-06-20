/* Returning value from function */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, s;
  
  int MySum(int, int);
  
  clrscr();

  printf("Enter two number for function.\n");
  scanf("%d %d", &a, &b);

  s = MySum(a,b);

  printf("Sum from function = %d\n", s);

  getch();
  return 0;
}

int MySum(c, d)
int c, d;
{
  int sum;
  sum = c + d;
  return(sum);
}

