/* Finding String Grade in Student Result */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
  char Name[10], Grade[5];
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

  if(Avg >= 80)
    strcpy(Grade,"A+");
  else if(Avg >= 60)
    strcpy(Grade,"B+");
  else if(Avg >= 35)
    strcpy(Grade,"C+");
  else
    strcpy(Grade,"Fail");

  clrscr();

  printf("Name\tMaths\tEng\tGuj\tSS\tTotal\tAvg\tGrade\n");
  printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%s\n", Name, Maths, Eng, Guj, SS, Total, Avg, Grade);

  getch();
  return 0;
}