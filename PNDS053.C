 /* Two dimensional arrays with direct defining */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, no[5][5] = {
			  {1,2,3,4,5},
			  {6,7,8,9,10},
			  {11,12,13,14,15},
			  {16,17,18,19,20},
			  {21,22,23,24,25}
			};
  char ch[5][5] = {
			  {'a','b','c','d','e'},
			  {'f','g','h','i','j'},
			  {'k','l','m','n','o'},
			  {'p','q','r','s','t'},
			  {'u','v','w','x','y'}
			};
  clrscr();

  for(a=0; a<5; ++a) {
    for(b=0; b<5; ++b) {
      printf("no[%d][%d] = %d\t",a,b,no[a][b]);
      printf("ch[%d][%d] = %c\n",a,b,ch[a][b]);
    }
    printf("Press any key...\n");
    getch();
  }

  return 0;
}
