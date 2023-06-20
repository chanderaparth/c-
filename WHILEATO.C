#include<stdio.h>
#include<conio.h>

int main(){
char i='A',n;
clrscr();
printf("Enter :");
scanf("\n%c",n);

while(i<='Z'){
printf("\n%c",i);
i++;
}

getch();
return 0;
}