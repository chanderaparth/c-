#include<stdio.h>
#include<conio.h>
 void main(){
 char c='Y';
 static char s[]="hijklmnopqrstuvwxyzabcdefg";
 int i=555;
 short int j=75;
 long int l = 80000L;
 float f=13.789;
 double d=13.987654321;
 clrscr();

 printf("Decimal i           : %d\n",i);
 printf("Octal i             : %#o\n",i);
 printf("Hexadecimal i       : %#x\n",i);
 printf("Short int j         : %d\n",j);
 printf("long int l          : %ld\n",l);
 printf("float f             : %f\n",f);
 printf("enotation           : %e\n",f);
 printf("float with g        : %g\n",f);
 printf("zdecimalpoint       : %.2f\n",f);
 printf("no inwidthoflo      : %10.2f\n",f);
 printf("double D with f     : %f\n",d);
 printf("char c              : %c\n",c);
 printf("char as Hexadecimal : %5c\n",c);
 printf("char in width 5     : %#x\n",c);
 printf("staring             : %s\n",s);
 printf("first schar         : %.5s\n",s);
 printf("widthchar           : %30s\n",s);

 getch();
 }