/* Open a file and see the contents */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define no 81

int main() {
  FILE *datafile;
  char *filename = (char *) malloc(sizeof(char) *13);
  char *textline = (char *) malloc(sizeof(char) * no);

  clrscr();
  printf("Enter filename:");
  gets(filename);
  datafile = fopen(filename, "r+");

  if(datafile == NULL)
    puts("File not found.");
  else {
    while(!(fgets(textline, no, datafile) == NULL))
      printf("%s", textline);

    fclose(datafile);
  }
  getch();
  return 0;
}