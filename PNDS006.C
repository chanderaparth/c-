/* Program to illustrate various escape sequence */

#include <stdio.h>
#include <conio.h>

int main() {
  clrscr();

  printf("P. N. Data System\b\b");
  getch();

  printf("\nAjay\tSujay");
  getch();

  printf("\n\tSulochna\rAnjana");
  getch();

  printf("\nPress enter and it will give you four \"beep\"");
  getch();

  printf("\a\a\a\a");

  return 0;
}