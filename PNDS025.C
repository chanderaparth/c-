/* Program for Else If statement */

#include <stdio.h>
#include <conio.h>

int main() {
  short int age;

  clrscr();
  printf("Enter your age :");
  scanf("%d",&age);

  if(age > 21) {
    printf("Now you are able to merry,\n");
    printf("and also able to get driving license.\n");
  }
  else if(age > 18) {
    printf("Now you are able to get driving license,\n");
    printf("But NOT able to get merry.\n");
  }
  else
    printf("You are little baby.\n");

  printf("Your age is %d",age);

  getch();
  return 0;
}