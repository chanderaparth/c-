/* Finding Factorial with for loop */

#include <stdio.h>
#include <conio.h>

int main() {
  int i, n;
  long int f=1;

  clrscr();

  printf("Enter end no: ");
  scanf("%d", &n);

  for(i=1; i<=n; i++) {
    f *= i;
    printf("%d! = %ld\n", i, f);
  }

  getch();
  return 0;
}