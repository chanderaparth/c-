/* Create a new file and add text */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define TRUE 1

int main() {
  FILE *datafile;
  char *filename = (char *) malloc(sizeof(char) * 13);
  char *textline = (char *) malloc(sizeof(char) * 1000);
  clrscr();

  printf("Enter filename :");
  gets(filename);

  if((datafile = fopen(filename, "w+")) == NULL) {
    puts("Cannot create target file.");
    exit(1);
  }

  puts("Enter data, press Enter when done:");
  while(TRUE) {
    gets(textline);
    if(strcmp(textline,"") == 0)
      break;

    strcat(textline,"\x0a");
    fputs(textline, datafile);
  }
  fclose(datafile);
  return 0;
}