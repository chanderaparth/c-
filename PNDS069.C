/* Finding Five Employees Salary with Structure and Array using float data type */

#include <stdio.h>
#include <conio.h>

#define s 2

/* Special function for forcing structure and float */
void force() {
  float x, *y=&x;
  x = *y;
}

int main() {
  int i;
  struct data {
    char name[10];
    float basic, hra, ca, da, net;
  }emp[s];

  clrscr();

  force();

  for(i=0; i<s; i++) {
    printf("Name: ");
    fgets(emp[i].name, sizeof(emp[i].name), stdin);

    printf("Basic Pay: ");
    scanf("%f", &emp[i].basic);

    printf("------------\n");
    flushall();

    emp[i].hra = emp[i].basic * 0.10;
    emp[i].ca = emp[i].basic * 0.05;
    emp[i].da = emp[i].basic * 0.25;
    emp[i].net = emp[i].basic + emp[i].hra + emp[i].ca + emp[i].da;
  }

  clrscr();

  for(i=0; i<s; i++) {
    printf("Employ Name: %s\n", emp[i].name);
    printf("Basic\tHRA\tCA\tDA\tNet\n");
    printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", emp[i].basic, emp[i].hra, emp[i].ca, emp[i].da, emp[i].net);
    printf("--------------------------------------\n\n");
  }
  getch();
  return 0;
}