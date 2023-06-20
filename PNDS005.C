/* Calculate two numbers */

#include <stdio.h>
#include <conio.h>

int main() {
  /* Declaration */
  int no1, no2, sum;

  clrscr();

  /* Input */
  printf("Enter value of no1: ");
  scanf("%d", &no1);

  printf("Enter value of no2: ");
  scanf("%d", &no2);

  /* Process */
  sum = no1 + no2;

  /* Output */
  printf("%d + %d = %d\n", no1, no2, sum);

  getch();
  return 0;
}