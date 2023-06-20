/* Alphabetical sorting of strings */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

  int i,j;
  char name[5][15],t[15];

  clrscr();

  printf("Enter five friend\'s name\n");

  for(i=0;i<5;i++) {
    gets(name[i]);
  }

  for(i=0; i<5-1; i++) {
    for(j=i+1; j<5; j++) {
      if(strcmp(name[i], name[j]) > 0) {
	strcpy(t, name[i]);
	strcpy(name[i], name[j]);
	strcpy(name[j], t);
      }
    }
  }

  printf("\nAlphabatical List\n");

  for(i=0;i<5;i++) {
    printf("%s\n",name[i]);
  }

  getch();
  return 0;
}
