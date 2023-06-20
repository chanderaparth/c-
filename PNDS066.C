/* Use of structure */

#include <stdio.h>
#include <conio.h>

int main() {
  struct MyData {
    char name[15];
    int rno, age;
  } data;

  clrscr();

  printf("Name : ");
  gets(data.name);

  printf("Roll no.: ");
  scanf("%d", &data.rno);

  printf("Age : ");
  scanf("%d", &data.age);

  printf("\nThis data display from structure data\n\n");
  printf("Hello! %s\n", data.name);
  printf("Your Roll No. : %d\n", data.rno);
  printf("Your Age :%d\n", data.age);

  getch();
  return 0;
}

