/* Finding Character Grade in Student Result */

#include <stdio.h>
#include <conio.h>

int main() {
  char Name[10], Grade;
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
    Grade = 'A';
  else if(Avg >= 60)
    Grade = 'B';
  else if(Avg >= 35)
    Grade = 'C';
  else
    Grade = 'F';

  clrscr();

  printf("Name\tMaths\tEng\tGuj\tSS\tTotal\tAvg\tGrade\n");
  printf("%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n", Name, Maths, Eng, Guj, SS, Total, Avg, Grade);

  getch();
  return 0;
}