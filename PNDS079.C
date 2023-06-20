/* Sending char array to a function */

#include <stdio.h>
#include <conio.h>

int main() {
  char name[15];
  void PrintName(char[]);
  clrscr();

  printf("Enter your name:");
  gets(name);

  PrintName(name);

  getch();
  return 0;
}

void PrintName(char fname[])
{
  int a;
  for(a=0; a<10; a++)
    printf("%s\n",fname);
}