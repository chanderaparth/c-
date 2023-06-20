/* Writing function for finding compound interest */

#include <stdio.h>
#include <conio.h>
#include <math.h>

struct mydata {
  int n;
  float p, r, i, m;
};

typedef struct mydata data;

int main() {

  data ci(data);
  data z;

  clrscr();

  printf("Principle: ");
  scanf("%f", &z.p);

  printf("Rate     : ");
  scanf("%f", &z.r);

  printf("Period   : ");
  scanf("%d", &z.n);

  z = ci(z);

  clrscr();

  printf("Principle Amount: %.2f\n", z.p);
  printf("Rate of Interest: %.2f\n", z.r);
  printf("No of Year      : %d\n", z.n);
  printf("Compound Int.   : %.2f\n", z.i);
  printf("Maturity Amount : %.2f\n", z.m);

  getch();
  return 0;
}

data ci(data x) {

  x.m = x.p * pow((1+x.r/100),x.n);
  x.i = x.m - x.p;

  return(x);
}