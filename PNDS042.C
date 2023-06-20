/* For loop pattern - 4
  54321
  4321
  321
  21
  1
*/

#include <stdio.h>
#include <conio.h>

int main() {
  int i, j, no;

  clrscr();

  printf("Enter end no: ");
  scanf("%d", &no);

  for(i=no; i>0; i--) {
    for(j=i; j>0; j--) {
      printf("%d",j);
    }
    printf("\n");
  }

  getch();
  return 0;
}