/* Dynamic array with pointer and malloc */

#include <stdio.h>
#include <stdlib.h>

int main() {
  int *pa, n, i;

  system("cls");

  printf("How many int: ");
  scanf("%d", &n);

  pa = (int *) malloc(sizeof(int) * n);

  printf("Please enter %d int\n", n);

  for(i=0; i<n; ++i)
    scanf("%d", &pa[i]);

  printf("\nYou entered\n");
  for(i=0; i<n; ++i)
    printf("%d\n", pa[i]);

  free(pa);

  system("pause");
  return 0;
}