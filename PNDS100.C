/* Find string length with function and pointer */

#include <stdio.h>
#include <conio.h>

int string_length(str)
char *str;
{
  char *strpoint = str;

  while(*strpoint) {
    ++strpoint;
  }
  return(strpoint-str);
}

int main() {
  static char str[25];
  clrscr();

  printf("\n\nEnter your string :");
  gets(str);

  printf("\nYour string length is : %d\n", string_length(str));

  getch();
  return 0;
}