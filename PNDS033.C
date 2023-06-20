/* Program to evaluate simple expressions */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {
  float value1, value2;
  char sign;
  clrscr();

  printf("Type your expression.\n");
  scanf("%f %c %f", &value1, &sign, &value2);

  switch(sign) {
    case '+':
     printf("%.2f\n", value1 + value2);
     break;
    case '-':
     printf("%.2f\n",value1 - value2);
     break;
    case '*':
     printf("%.2f\n", value1 * value2);
     break;
    case '/':
      if(value2 == 0)
	printf("Division by zero.\n");
      else
	printf("%.2f\n", value1 / value2);

      break;
    case '%':
      if(value2 == 0) printf("Division by zero.\n");
      else printf("%.2f\n", fmod(value1,value2));
      break;
    default:
     printf("Unknown sign.\n");
     break;
    }
 
  getch();
  return 0;
}