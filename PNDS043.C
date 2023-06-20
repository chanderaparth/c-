/* For loop pattern - 5
  12345
   1234
    123
     12
      1
*/

#include <stdio.h>
#include <conio.h>

int main() {
  int i, j, k, no;

  clrscr();

  printf("Enter end no: ");
  scanf("%d", &no);

  for(i=no; i>=1; i--) {
    for(k=0; k<(no-i); k++) {
      printf(" ");
    }
    for(j=1; j<=i; j++) {
      printf("%d", j);
    }
    printf("\n");
  }

  getch();
  return 0;
}
