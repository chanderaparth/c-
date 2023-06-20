/* Find and delete duplicate numbers from given array */

#include <stdio.h>
#include <conio.h>

int main() {
  int a[10], i, j, no;

  clrscr();

  printf("How many numbers in array: ");
  scanf("%d", &no);

  printf("Enter %d numbers for the array:\n", no);

  for(i=0; i<no; i++) {
    scanf("%d", &a[i]);
  }

  clrscr();
  printf("Array before deleting duplicate numbers:\n");
  for(i=0; i<no; i++) {
    printf("%d\n", a[i]);
  }

  for(i=0; i<no; i++) {
    for(j=i+1; j<no; j++) {
      if(a[i] == a[j]) {
	for(; j<no; ++j) {
	  a[j] = a[j+1];
	}
	no--;
      }
    }
  }
  printf("Array after deleting duplicate numbers:\n");
  for(i=0; i<no; i++) {
    printf("%d\n", a[i]);
  }

  getch();
  return 0;
}
