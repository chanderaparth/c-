/* Creating and using pointer to function */

#include <stdio.h>
#include <conio.h>

void fun(int i) {

  printf("i inside function %d\n", i);

}

int main() {
  void (*myFun)(int);

  clrscr();

  myFun = &fun;

  (*myFun)(30);

  getch();
  return 0;
}