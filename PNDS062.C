/* Matrix sum with array and for loop */

#include <stdio.h>
#include <conio.h>

#define n 3

/* const int n=3; and a[n][n] will work in new C99 not in old C89 */

int main() {
  int a[n][n], b[n][n], s[n][n], i, j;

  clrscr();

  printf("Enter Value for 1st matrix\n");
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("A[%d][%d] = ", i,j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  printf("Enter Value for 2nd matrix\n");
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("B[%d][%d] = ", i,j);
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }

  /* Calculating sum */
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      s[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("1st matrix\t2nd matrix\t3rd Matrix\n");
  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\t\t");
    for(j=0; j<n; j++) {
      printf("%d ", b[i][j]);
    }
    printf("\t\t");
    for(j=0; j<n; j++) {
      printf("%d ", s[i][j]);
    }
    printf("\n");
  }

  getch();
  return 0;
}
