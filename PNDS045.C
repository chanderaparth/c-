/* Change string in upper, lower and reverse case */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
  char *your_name, *friend_name;

  clrscr();
  printf("Enter your name in lower case :");
  gets(your_name);

  printf("Enter your friend's name in upper case :");
  gets(friend_name);

  clrscr();
  printf("\nYour name: %s\n", strupr(your_name));
  printf("Your friend's name:  %s\n\n", strlwr(friend_name));
  printf("Your name in reverse: %s\n", strrev(your_name));

  getch();
  return 0;
}