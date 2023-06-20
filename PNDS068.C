/* Finding Five Employees Salary with Structure and Array using int data type */

#include <stdio.h>
#include <conio.h>

#define s 2

int main() {
  int i;
  struct data {
    char name[10];
    int basic, hra, ca, da, net;
  }emp[s];

  clrscr();

  for(i=0; i<s; i++) {
    printf("Name: ");
    fgets(emp[i].name, sizeof(emp[i].name), stdin);

    printf("Basic Pay: ");
    scanf("%d", &emp[i].basic);

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
    printf("%d\t%d\t%d\t%d\t%d\n", emp[i].basic, emp[i].hra, emp[i].ca, emp[i].da, emp[i].net);
    printf("--------------------------------------\n\n");
  }
  getch();
  return 0;
}