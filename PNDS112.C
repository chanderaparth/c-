/* Find and open a file */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
  FILE *datafile;
  char *filename = (char *) malloc(sizeof (char) * 13);

  clrscr();
  printf("Enter filename :");
  gets(filename);

  datafile = fopen(filename, "r+");
  if(datafile == NULL)
      puts("File not found.");
  else {
    printf("File found and open for you\nPress any key to close it\n");
    fclose(datafile);
  }
  getch();
  return 0;
}
