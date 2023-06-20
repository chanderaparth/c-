/* Find and delete given number from given Array */

#include<stdio.h>
#include<conio.h>

int main() {
  int a[10], i, no, del;

  clrscr();

  printf("How many numbers in Array : ");
  scanf("%d", &no);

  printf("Enter %d number for the array:\n", no);

  for(i=0;i<no;i++) {
    scanf("%d", &a[i]);
  }

  clrscr();
  printf("Array before deleting number:\n");
  for(i=0;i<no;i++) {
    printf("%d\n",a[i]);
  }

  printf("Which number you want to delete? ");
  scanf("%d", &del);

  for(i=0; i<no; i++) {
    if(a[i] == del) {
      no--;
      for(; i<no; ++i) {
	a[i] = a[i+1];
      }
      break;
    }
  }

  printf("Array after deleting number:\n");
  for(i=0;i<no;i++) {
    printf("%d\n",a[i]);
  }

  getch();
  return 0;
}