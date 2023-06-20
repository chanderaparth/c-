/* Pointers with character string and function */

#include <stdio.h>
#include <conio.h>

void copy_string(from, to)
char *from, *to;
{
  int i;
  for(; *from != '\0'; ++from, ++to)
    *to = *from;

  *to = '\0';
}

int main() {
  static char array1[25];
  static char array2[]= "Nothing";

  clrscr();
  printf("Enter array1: ");
  gets(array1);

  printf("\n\nArray1 = %s\n", array1);
  printf("Array2 = %s\n", array2);

  copy_string(array1, array2);

  printf("\n\nArray1 = %s\n", array1);
  printf("Array2 = %s\n", array2);

  getch();
  return 0;
}