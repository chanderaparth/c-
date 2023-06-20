/* Program for strcmp and stricmp */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void report(int status);

int main() {
  char *string1, *string2, *string3, *string4;
  int result;
  clrscr();

  string1 = "abc";
  string2 = "abc";
  result = strcmp(string1, string2);
  report(result);

  string1 = "abc";
  string2 = "ABC";
  result = strcmp(string1, string2);
  report(result);

  string3 = "abc";
  string4 = "abc";
  result = stricmp(string3, string4);
  report(result);

  string3 = "abc";
  string4 = "ABC";
  result = stricmp(string3, string4);
  report(result);

  getch();
  return 0;
}

void report(int result) {
  if(result == 0)
    printf("Strings are the same\n");
  else
    printf("Strings are different\n");
}