/* Program of scanf function */

#include <stdio.h>
#include <conio.h>

int main() {
  char name[15];
  int age;

  clrscr();
  printf("Enter your name : ");
  scanf("%s", &name);

  printf("What is your age : ");
  scanf("%d", &age);

  printf("%s your age is %d\n",name,age);

  getch();
  return 0;
}