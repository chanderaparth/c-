#include<stdio.h>
#include<conio.h>

int main(){    
int i=1,number=0,b=9; 
clrscr();
   
printf("Enter a number: ");    
scanf("%d",&number);
    
while(i<=10){    
printf("%d \n",(number*i));    
i++;    
}

getch();    
return 0;  
}   