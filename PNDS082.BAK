/* Finding string length by sending char array to function */

#include <stdio.h>
#include <conio.h>

int string_length(str)
char str[];
{
  int c = 0;

  while(str[c] != '\0')
    ++c;

  return(c);
}

int main() {

  static char str[25];
  clrscr();

  printf("Enter your string : ");
  gets(str);

  printf("\nYour string length is : %d\n", string_length(str));

  getch();
  return 0;
}