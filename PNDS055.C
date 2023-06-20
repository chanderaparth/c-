/* Three dimensional arrays with for loop defining */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, c, n=1, no[3][3][3];
  char ch[3][3][3];
  clrscr();

  printf("Please enter 27 value for no and ch array\n");
  for(a=0; a<3; ++a) {
    for(b=0; b<3; ++b) {
      for(c=0; c<3; ++c) {
	printf("%d: ",n);
	scanf("%d %c", &no[a][b][c], &ch[a][b][c]);
	n++;
      }
    }
  }
  clrscr();
  for(a=0; a<3; ++a) {
    for(b=0; b<3; ++b) {
      for(c=0; c<3; ++c) {
	printf("no[%d][%d][%d] = %d\t\t",a,b,c,no[a][b][c]);
	printf("ch[%d][%d][%d] = %c\n",a,b,c,ch[a][b][c]);
      }
    }
    printf("Press any key...\n");
    getch();
  }

  return 0;
}