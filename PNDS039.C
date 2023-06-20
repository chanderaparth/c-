/* For loop pattern - 1

1 1 1 1 1   1        	*
2 2 2 2 2   2 2         * *
3 3 3 3 3   3 3 3       * * *
4 4 4 4 4   4 4 4 4     * * * *
5 5 5 5 5   5 5 5 5 5   * * * * *

*/

#include <stdio.h>
#include <conio.h>

int main() {
  int a,b;

  clrscr();

  for(a=1; a<=5; a++) {
    for(b=1; b<=5; b++) {
      printf("%d ", a);
    }
    printf("\n");
  }

  getch();
  return 0;
}