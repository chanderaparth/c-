/* Four dimensional arrays and formatted display */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, c, d, n=1, no[2][2][2][2];
  char ch[2][2][2][2];

  clrscr();
  printf("Please enter 16 values for no and ch array\n");
  for(a=0; a<2; ++a) {
    for(b=0; b<2; ++b) {
      for(c=0; c<2; ++c) {
	for(d=0; d<2; ++d) {
	  printf("%d: ",n);
	  scanf("%d %c", &no[a][b][c][d], &ch[a][b][c][d]);
	  n++;
	}
      }
    }
  }
  for(a=0; a<2; ++a) {
    clrscr();
    printf("****** Group: %d ******\n", a+1);
    for(b=0; b<2; ++b) {
      printf("\nTable: %d - ", b+1);
      for(c=0; c<2; ++c) {
	printf("Row: %d\n", c+1);
	printf("  No\tCh\n");
	for(d=0; d<2; ++d) {
	  printf("  %d\t%c\n",no[a][b][c][d], ch[a][b][c][d]);
	}
	printf("-------------------\n");
      }
    }
    getch();
  }

  return 0;
}