/* Program for If statement */

#include <stdio.h>
#include <conio.h>

int main() {
  short int age;
  clrscr();

  printf("Enter your age : ");
  scanf("%d", &age);

  if(age > 18)
    printf("Now you are able to get driving license.\n");

  printf("Your age is %d",age);

  getch();
  return 0;
}