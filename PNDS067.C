/* Structure with arrays */

#include <stdio.h>
#include <conio.h>

#define s 2

int main() {

  int a;

  struct MyData {
    char name[20];
    int rno, age;
  } data[s];

  clrscr();

  for(a=0; a<s; a++) {
   printf("Name : ");
   gets(data[a].name);

   printf("Roll No.: ");
   scanf("%d", &data[a].rno);

   printf("Age : ");
   scanf("%d", &data[a].age);
   printf("----------------\n");
   flushall();
  }

  printf("Press any key to display structure data\n");
  getch();
  clrscr();

  printf("This data display from structure data\n\n");
  printf("Name\tRoll no\tAge\n");
  for(a=0; a<s; a++) {
    printf("%s\t%d\t%d\n", data[a].name, data[a].rno, data[a].age);
  }

  getch();
  return 0;
}