/* Writing functions */

#include <stdio.h>
#include <conio.h>

void MyFun1(void);		/* Global declaration of function */

int main() {
  void MyFun2(void);	/* Local declaration of function */

  clrscr();

  printf("Welcome to P.N.Data System.\n");

  MyFun1();
  MyFun2();

  printf("End of function checking.\n");

  getch();
  return 0;
}

void MyFun1(void) {
  printf("This is first function.\n");
}

void MyFun2(void) {
  printf("This is second function.\n");
}