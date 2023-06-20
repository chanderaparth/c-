/* Program to illustrate various data types and formats */

#include <stdio.h>
#include <conio.h>

int main() {
  char c = 'X';
  static char s[] = "abcdefghijklmnopqrstuvwxyz";
  int i = 425;
  short int j = 17;
  long int l = 75000L;
  float f = 12.978;
  double d = 12.123456789;

  clrscr();

  printf("Decimal i          : %d\n", i);
  printf("Octal i            : %#o\n", i);
  printf("Hexadecimal i      : %#x\n", i);
  printf("Short int j        : %d\n", j);
  printf("Long int l         : %ld\n", l);
  printf("Float f            : %f\n", f);
  printf("e notation         : %e\n", f);
  printf("Float with g       : %g\n", f);
  printf("2 decimal point    : %.2f\n", f);
  printf("No in width of 10  : %10.2f\n", f);
  printf("Double d with f    : %f\n", d);
  printf("Char c             : %c\n", c);
  printf("Char c in width 5  : %5c\n", c);
  printf("Char as Hexadecimal: %#x\n",c);
  printf("String             : %s\n",s);
  printf("First 5 char       : %.5s\n",s);
  printf("Width with char    : %30s\n",s);

  getch();
  return 0;
}