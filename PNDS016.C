/* Logical Operator */

#include <stdio.h>
#include <conio.h>

int main() {
  char City[4][10] = {"Baroda","Surat","Baroda","Vapi"};
  int i, Age[4] = {21,24,30,35};

  clrscr();

  for(i=0; i<4; i++) {
    if(!strcmp(City[i],"Baroda"))
      printf("True\t");
    else
      printf("False\t");

    if(Age[i] < 25)
      printf("True\t");
    else
      printf("False\t");

    if(!strcmp(City[i],"Baroda") && Age[i] < 25)
      printf("True\n");
    else
      printf("False\n");
  }

  getch();
  return 0;
}
