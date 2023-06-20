/* Program to change character's case */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
  char c,u,l;

  clrscr();
  printf("Enter your character :");
  scanf("%c", &c);

  u = toupper(c);
  l = tolower(c);

  printf("\n\nUpper case %c\n", u);
  printf("Lower case %c\n",l);

  getch();
  return 0;
}