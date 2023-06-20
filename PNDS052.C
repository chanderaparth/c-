/* Single dimensional arrays with for loop defining */

#include <stdio.h>
#include <conio.h>

int main() {
  int a,no[5];
  char ch[5];
  clrscr();

  for(a=0; a<5; ++a) {
    printf("Enter your value for no and ch array. (eg.3 a)\n");
    scanf("%d %c", &no[a], &ch[a]);
  }
  for(a=0; a<5; ++a) {
    printf("no[%d] = %d\t",a,no[a]);
    printf("ch[%d] = %c\n",a,ch[a]);
  }

  getch();
  return 0;
}