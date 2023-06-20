#include<stdio.h>
#include<conio.h>

int main(){
int i=0,n;
clrscr();

printf("Enter :");
scanf("\n%d",&n);

while(i<=n){
printf("\n%d",i);
i+=2;
}

getch();
return 0;
}