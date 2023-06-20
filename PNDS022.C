/* Program for Student Result */

#include <stdio.h>
#include <conio.h>

int main() {
  char Name[10];
  int Maths, Eng, Guj, SS, Total;
  float Avg;

  clrscr();

  printf("Name   : ");
  scanf("%s", &Name);

  printf("Maths  : ");
  scanf("%d", &Maths);

  printf("Eng    : ");
  scanf("%d", &Eng);

  printf("Guj    : ");
  scanf("%d", &Guj);

  printf("S.S.   : ");
  scanf("%d", &SS);

  Total = Maths + Eng + Guj + SS;
  Avg = Total / 4;

  clrscr();

  printf("Name\tMaths\tEng\tGuj\tSS\tTotal\tAvg\n");
  printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2f\n", Name, Maths, Eng, Guj, SS, Total, Avg);

  getch();
  return 0;
}