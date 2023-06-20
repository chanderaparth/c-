/* Finding Grade for five Students */

#include <stdio.h>
#include <conio.h>

#define s 2

/* const int s=2; will work in new C99 not in old C89 */

int main() {
  char Name[s][10], Grade[s];
  int i, Maths[s], Eng[s], Guj[s], SS[s], Total[s];
  float Avg[s];

  clrscr();

  for(i=0; i<s; i++) {

    printf("Name   : ");
    gets(Name[i]);

    printf("Maths  : ");
    scanf("%d", &Maths[i]);

    printf("Eng    : ");
    scanf("%d", &Eng[i]);

    printf("Guj    : ");
    scanf("%d", &Guj[i]);

    printf("S.S.   : ");
    scanf("%d", &SS[i]);
    flushall();

    printf("------------\n");

    Total[i] = Maths[i] + Eng[i] + Guj[i] + SS[i];
    Avg[i] = Total[i] / 4;

    if(Avg[i] >= 70)
      Grade[i] = 'A';
    else if(Avg[i] >= 50)
      Grade[i] = 'B';
    else if(Avg[i] >= 35)
      Grade[i] = 'C';
    else
      Grade[i] = 'F';
  }

  clrscr();

  printf("Name\t\tMaths\tEng\tGuj\tSS\tTotal\tAvg\tGrade\n");

  for(i=0; i<s; i++) {
    printf("%-10s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%c\n", Name[i], Maths[i], Eng[i], Guj[i], SS[i], Total[i], Avg[i], Grade[i]);
  }

  getch();
  return 0;
}