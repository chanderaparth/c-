#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  int no[10], i, end;
  char *ch = (char *) malloc(sizeof(char) * 10);
  FILE *odd, *even;

  odd = fopen("odd.txt", "w");
  even = fopen("even.txt", "w");

  clrscr();

  printf("Enter end no: ");
  scanf("%d", &end);

  for(i=0; i<end; i++) {
    printf("Enter no: ");
    scanf("%d", &no[i]);
  }

  for(i=0; i<end; i++) {
    itoa(no[i], ch, 10);

    if(no[i] % 2 == 0) {
      fputs(ch, even);
      putc('\n',even);
    }
    else {
      fputs(ch,odd);
      putc('\n',odd);
    }
  }
  fclose(odd);
  fclose(even);

  printf("files are created in bin.");
  getch();
  return 0;
}