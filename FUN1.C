#include<stdio.h>
#include<conio.h>

int main () {

   int a;
   for( a = 100; a < 500; a = a + 1 ){
      printf("value of a: %d\n", a);
   }
   getch();
   return 0;
}