/* Program for strlen, strcpy and strcat */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
  char *s1, *s2, *s3;
  s1 = "pnds";
  s2 = "sujay";
  s3 = (char *) malloc(sizeof(char) * ((strlen(s1) + strlen(s2) + 1)));

  clrscr();

  strcpy(s3,s1);
  strcat(s3,s2);
  printf("%d %d %d\n",strlen(s1), strlen(s2), strlen(s3));
  printf("%s", s3);

  getch();
  return 0;
}