/* Menu with do - while and switch - case */

#include <stdio.h>
#include <conio.h>

int main() {

  int ch;

  do {

    clrscr();

    printf("1. First choise\n");
    printf("2. Second choise\n");
    printf("3. Exit\n");

    printf("\nEnter your choise: ");
    scanf("%d", &ch);

    switch(ch) {
      case 1:
	printf("\n\nFirst choise selected\n");
	getch();
	break;
      case 2:
	printf("\n\nSecond choise selected\n");
	getch();
	break;
      case 3:
	break;
      default:
	printf("\n\nPlease select 1 to 3 only\n");
	getch();
	break;
    }
  } while(ch != 3);

  return 0;
}