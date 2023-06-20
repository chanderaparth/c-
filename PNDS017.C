/* Bitwise Operator */

#include <stdio.h>
#include <conio.h>

int main() {
  int a=3;			/* binary of 3 = 0011 */
  int b=6;              	/* binary of 6 = 0110 */
  int c = a & b;        	/* binary of 2 = 0010 */
				/* binary of 7 = 0111 */

  clrscr();
  printf("A = %d\n", a);
  printf("B = %d\n", b);
  printf("C = %d\n", c);

  getch();
  return 0;
}

