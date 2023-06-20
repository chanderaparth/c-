/* Program for Break and Continue statement */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main() {
  int a = 0;
  char ch;
  clrscr();

  while(a < 5) {
    a++;
    printf("\nEnter any char or B for Break, C for continue\n");
    ch = toupper(getch());

    if(ch == 'C') {
      continue;
    }
    if(ch == 'B')
      break;

    printf("\nYour character %c -- %d\n",ch,a);
  }

  return 0;
}
