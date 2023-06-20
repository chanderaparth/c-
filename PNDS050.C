/* Program to convert integer into string */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  int num = 65;
  char *string;
  clrscr();

  string = (char *) malloc(sizeof (char) * 10);
  itoa(num, string, 10);
  printf("%s", string);

  getch();
  return 0;
}