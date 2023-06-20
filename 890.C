#include<stdio.h>
#include<conio.h>
int main() {
  int a[4][4], i, j, TopRightCor=0, LowerLeftCor=0, Diagonal=0;


  printf("Enter number for Array:\n");

  for(i=0; i<4; ++i) {
    for(j=0; j<4; ++j) {
      printf("a[%d][%d]=", i,j);
      scanf("%d", &a[i][j]);
    }
  }
  printf("Array Numbers\n");
  for(i=0; i<4; ++i) {
    for(j=0; j<4; ++j) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<4; ++i) {
    for(j=0; j<4; ++j) {
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

   return 0;
}