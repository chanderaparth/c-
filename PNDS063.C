/* Finding Diagonal, Top Right Corner, and Lower Left Corner sum of array
   Array	Diagnal		TopRightCorner	   LowerLeftCorner
   1 2 3       (1) 2  3         1 (2)(3)            1  2  3
   4 5 6        4 (5) 6         4  5 (6)           (4) 5  6
   7 8 9        7  8 (9)        7  8  9            (7)(8) 9

   if no is like array
   Diagnal sum is 1 + 5 + 9 = 15
   TopRightCorner sum is 2 + 3 + 6 = 11
   LowerLeftCorner sum is 4 + 7 + 8 = 19
*/

#include <stdio.h>
#include <conio.h>

int main() {
  int a[3][3], i, j, TopRightCor=0, LowerLeftCor=0, Diagonal=0;

  clrscr();

  printf("Enter number for Array:\n");

  for(i=0; i<3; ++i) {
    for(j=0; j<3; ++j) {
      printf("a[%d][%d]=", i,j);
      scanf("%d", &a[i][j]);
    }
  }
  clrscr();
  printf("Array Numbers\n");
  for(i=0; i<3; ++i) {
    for(j=0; j<3; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<3; ++i) {
    for(j=0; j<3; ++j) {
      if(j>i)
	TopRightCor += a[i][j];
      else if (j < i)
	LowerLeftCor += a[i][j];
      else
	Diagonal += a[i][j];
    }
  }
  printf("\nSum of Diagonal Numbers: %d", Diagonal);
  printf("\nSum of Top Right Corner: %d", TopRightCor);
  printf("\nSum of Lower Left Corner: %d", LowerLeftCor);

  getch();
  return 0;
}



