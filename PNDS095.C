/* Pointers with array */

#include <stdio.h>
#include <conio.h>

int main() {
  int a[5], *b, i;
  clrscr();

  for(i=0; i<5; i++) {
    printf("Value %d: ", i);
    scanf("%d", &a[i]);
  }

  b = a;

  printf("Array\tValue\tAddress\n");

  for(i=0; i<5; i++) {
    printf("A[%d]\t%d\t%p\n", i, *b, b);
    b++;
  }

  getch();
  return 0;
}