/* Logical mistake in If and Else statement */

#include <stdio.h>
#include <conio.h>

int main() {
  short int number;

  clrscr();
  printf("Enter number between 0 to 9 :");
  scanf("%d", &number);

  if(number < 5)
      printf("\n%d is less than 5.\n", number);
  else
      printf("\n%d is greater than 5.\n", number);

  getch();
  return 0;
}