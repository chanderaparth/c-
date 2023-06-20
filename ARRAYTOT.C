#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],b[5],sum[5];
     clrscr();
	printf("Enter first array:-\n");
	for(i=0;i<=5;i++)
	{
		printf("a[%d]=",i);	
		scanf("%d",&a[i]);
	}
	printf("Enter second array:-\n");	
	for(i=0;i<=5;i++)
	{
		printf("b[%d]=",i);	
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<=5;i++)
	{
		sum[i]=a[i]+b[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<=5;i++)
	{
		printf("\nsum[%d]=%d",i,sum[i]);	
	}
		
}