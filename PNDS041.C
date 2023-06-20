/* For loop pattern - 3
  12345
  2345
  345
  45
  5
*/

#include <stdio.h>
#include <conio.h>

int main() {
  int i, j, no;

  clrscr();

  printf("Enter end no: ");
  scanf("%d", &no);

  for(i=1; i<=no; i++) {
    for(j=i; j<=no; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  getch();
  return 0;
}