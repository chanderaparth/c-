/* Program for getch, getche, gets, fgets, fprintf, puts, etc. */

#include <stdio.h>
#include <conio.h>

int main() {
  char name[15];

  clrscr();

  fputs("Type your full name: ", stdout);
  fgets(name, 15, stdin);

  fprintf(stdout, "Your name is %s\n", name);

  getche();
  getch();
  return 0;
}