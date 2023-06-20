/* Two dimensional char array with fgets and fprintf */

#include <stdio.h>
#include <conio.h>

int main() {
  int a;
  char names[5][15];

  clrscr();
  printf("Please enter any five names.\n");
  for(a=0; a<5; ++a)
    fgets(names[a], 15, stdin);

  clrscr();

  for(a=0; a<5; ++a) {
    fprintf(stdout, "Name %d: %s", a, names[a]);
  }

  getch();
  return 0;
}