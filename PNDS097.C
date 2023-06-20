/* Display of memory locations and pointer calculation
   This program works only in Old TC IDE, not in TC++ IDE
*/


#include <stdio.h>
#include <conio.h>

int main() {
  char str[] = "Ajay Parmar";
  char str1[] = "Sujay Parmar";
  char *p1, *p2;
  int i;
  p1 = str;
  p2 = str1;

  clrscr();

  printf("Point 1 = %p\n", p1);
  printf("Point 2 = %p\n", p2);
  printf("Point 2 - Point 1 = %p\n", p2 - p1);

  for(i=0; i<p2-p1; i++,p1++,p2++)
    printf("%p = %2c  %p = %2c\n", p1, *p1, p2, *p2);

  getch();
  return 0;
}
