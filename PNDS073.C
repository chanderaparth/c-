/* Sending value to function */

#include <stdio.h>
#include <conio.h>

int main() {
  int a,b;

  void MySum(int, int);

  clrscr();

  printf("Enter two number for function.\n");
  scanf("%d %d", &a, &b);

  MySum(a,b);

  getch();
  return 0;
}

void MySum(int c, int d) {
  int sum;
  
  sum = c + d;
  
  printf("Sum within function = %d\n", sum);
}



