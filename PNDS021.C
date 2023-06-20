/* Program for Item Purchase */

#include <stdio.h>
#include <conio.h>

int main() {
  char Item[10];
  int Qty;
  float Rate, Amt;

  clrscr();

  printf("Item: ");
  scanf("%s", &Item);

  printf("Rate: ");
  scanf("%f", &Rate);

  printf("Qty: ");
  scanf("%d", &Qty);

  Amt = Rate * Qty;

  clrscr();

  printf("Item\tQty\tRate\tAmount\n");
  printf("%s\t%d\t%.2f\t%.2f\n", Item, Qty, Rate, Amt);

  getch();
  return 0;
}