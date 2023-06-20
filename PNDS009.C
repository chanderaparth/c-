/* Use of global variable */

#include <stdio.h>
#include <conio.h>

int A=10;

int main() {
  int i;
  void xyz(void);

  clrscr();

  for(i=0; i<5; ++i) {
    printf("A=%d\n", A);
  }
  xyz();

  getch();
  return 0;
}

void xyz() {
  printf("\nA=%d\n",A);
}
