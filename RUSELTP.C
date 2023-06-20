#include<stdio.h>
#include<conio.h>


int out(int m,int s,int e,int t,float p){
	printf("\nMaths\tScience\tEnglish\tTotal\tPre");
	printf("\n%d\t%d\t%d\t%d\t%.2f",m,s,e,t,p);
}

int calc(int m,int s,int e)
{
	int total;
	float pre;
	
	total=m+s+e;
	pre=(float)total/3;
	
	out(m,s,e,total,pre);
}


int main()
{
	int math,sci,eng;
        clrscr();
	
	printf("Enter a Maths marks : ");
	scanf("%d",&math);	
	printf("Enter a Science marks : ");
	scanf("%d",&sci);	
	printf("Enter a English marks : ");
	scanf("%d",&eng);
	
	
	
	calc(math,sci,eng);
	
       
      getch();
      return 0;
	
}