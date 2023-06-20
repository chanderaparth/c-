/* Two dimensional arrays with for loop defining */

#include <stdio.h>
#include <conio.h>

int main() {
  int a, b, n=1, no[5][5];
  char ch[5][5];

  clrscr();
  for(a=0; a<5;++a) {
    for(b=0;b<5;++b) {
      printf("Enter your value for no and ch array. (eg.5 H) -- %d\n",n);
      scanf("%d %c", &no[a][b], &ch[a][b]);
      n++;
    }
  }
  for(a=0; a<5; ++a) {
    for(b=0;b<5;++b) {
      printf("no[%d][%d] = %d\t",a,b,no[a][b]);
      printf("ch[%d][%d] = %c\n",a,b,ch[a][b]);
    }
    printf("Press any key...\n");
    getch();
  }

  return 0;
}
