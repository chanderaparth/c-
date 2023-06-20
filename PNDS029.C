/* Finding Discount in Item Purchase */

#include <stdio.h>
#include <conio.h>

int main() {
  char Item[10];
  int Qty;
  float Rate, Amt, Total=0.00, Dis, Net;

  clrscr();

  printf("Item: ");
  scanf("%s", &Item);

  printf("Qty: ");
  scanf("%d", &Qty);

  printf("Rate: ");
  scanf("%f", &Rate);

  Amt = Rate * Qty;

  Total += Amt;

  if(Total >= 1000) {
    Dis = Total * 0.10;
  }
  else if(Total >= 500) {
    Dis = Total * 0.05;
  }
  else {
    Dis = 0.00;
  }

  Net = Total - Dis;


  clrscr();

  printf("Item\tQty\tRate\tAmount\n");
  printf("%s\t%d\t%.2f\t%8.2f\n", Item, Qty, Rate, Amt);
  printf("\n\t\tTotal : %8.2f\n", Total);
  printf("\t\tDis   : %8.2f\n", Dis);
  printf("\t\tNet   : %8.2f\n", Net);

  getch();
  return 0;
}