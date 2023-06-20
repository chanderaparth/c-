/* Sort an array of integers into ascending order */

#include <stdio.h>
#include <conio.h>

#define s 5

void sort(a, n)
int a[];
int n;
{
  int i, j, temp;

  for(i=0; i<n-1; i++) {
    for(j=i+1; j<n; j++) {
      if(a[i] > a[j]) {
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
      }
    }
  }
}

int main() {
  int i;
  static int array[s];
  clrscr();

  printf("Enter your number for array\n");
  for(i=0; i<s; i++)
    scanf("%d", &array[i]);

  sort(array,s);

  printf("\nThe array after the sort\n");
  for(i=0; i<s; i++)
    printf("%d\n", array[i]);

  getch();
  return 0;
}