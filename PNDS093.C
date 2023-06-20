/* String data input with pointer */

#include <stdio.h>
#include <conio.h>

int main() {
  char *title;
  title = (char *) malloc(10);

  clrscr();
  printf("Enter your name :");
  scanf("%s", title);

  printf("%s",title);

  free(title);
  getch();
  return 0;
}