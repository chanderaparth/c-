/* Use of Free function */

#include <stdio.h>
#include <conio.h>

char buffer[1000];

int main() {
  char *title1, *title2;
  clrscr();

  printf("Enter a name : ");
  scanf("%s", buffer);

  title1 = (char *) malloc(strlen(buffer));
  strcpy(title1, buffer);
  printf("\n%s is at %p\n", title1, title1);

  free(title1);

  printf("\nEnter a second name: ");
  scanf("%s", buffer);

  title2 = (char *) malloc(strlen(buffer));
  strcpy(title2, buffer);
  printf("\n%s is at %p\n", title2, title2);

  getch();
  return 0;
}