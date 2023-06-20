/* Writing function for finding simple interest */

#include <stdio.h>
#include <conio.h>

int main() {

  int n;
  float p, r;
  void si(float, float, int);

  clrscr();

  printf("Principle: ");
  scanf("%f", &p);

  printf("Rate     : ");
  scanf("%f", &r);

  printf("Period   : ");
  scanf("%d", &n);

  si(p, r, n);

  getch();
  return 0;
}

void si(float p, float r, int n)
{
  float i, m;

  i = (p * r * n)/100;
  m = p + i;

  clrscr();

  printf("Principle Amount: %.2f\n", p);
  printf("Rate of Interest: %.2f\n", r);
  printf("No of Year      : %d\n", n);
  printf("Total Interest  : %.2f\n", i);
  printf("Maturity Amount : %.2f\n", m);
}