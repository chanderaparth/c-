/* Sending value from OS */

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
  int i=0;
  clrscr();

  if(argc < 2) {
    printf("Please enter argument.\n");
    getch();
    exit(0);
  }
  while(i < argc) {
    printf("Argument[%d] = %s\n", i, argv[i]);
    i++;
  }
  getch();
  return 0;
}