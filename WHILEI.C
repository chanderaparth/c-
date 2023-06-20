#include<stdio.h>
#include<conio.h>

int main(){
int i=1,n;
clrscr();

printf("Enter :");
scanf("%d",&n);

while(i<=n){
printf("\n%d",i);
i++;
}
getch();
return 0;
}