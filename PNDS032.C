/* Program for Switch statement */

#include <stdio.h>
#include <conio.h>

int main() {
  int number;
  clrscr();

  printf("Please enter the number 1 to 5 to display number in word\n");
  scanf("%d", &number);

  switch(number) {
    case 1:
     printf("One");
     break;
    case 2:
     printf("Two");
     break;
    case 3:
     printf("Three");
     break;
    case 4:
     printf("Four");
     break;
    case 5:
     printf("Five");
     break;
    default:
     printf("Enter number between 1 to 5 only\n");
     break;
  }

  getch();
  return 0;
}