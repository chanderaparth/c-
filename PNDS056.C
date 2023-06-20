/* Four dimensional arrays with for loop defining */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, c, d, n=1, no[2][2][2][2];
  char ch[2][2][2][2];

  clrscr();
  for(a=0; a<2; ++a) {
    for(b=0; b<2; ++b) {
      for(c=0; c<2; ++c) {
	for(d=0; d<2; ++d) {
	  printf("Enter your value for no and ch array. (eg.1a) -- %d\n",n);
	  scanf("%d %c", &no[a][b][c][d], &ch[a][b][c][d]);
	  n++;
	}
      }
    }
  }
  for(a=0; a<2; ++a) {
    for(b=0; b<2; ++b) {
      for(c=0; c<2; ++c) {
	for(d=0; d<2; ++d) {
	  printf("no[%d][%d][%d][%d] = %d\t",a,b,c,d,no[a][b][c][d]);
	  printf("ch[%d][%d][%d][%d] = %c\n",a,b,c,d,ch[a][b][c][d]);
	}
      }
    }
    printf("Press any key..\n");
    getch();
  }
  
  return 0;
}