#include<stdio.h>
#include<conio.h>
void main()
{
	char a[20];
	int i=0,k,j;
	clrscr();
	printf("enter string: ");
	//scanf("%s",&str);
	gets(a);
	k = strlen(a);
	j = k -1;
	for(i=0;i<k/2;i++)
	{
		printf("%c%c",a[i],a[j--]);
	}
	if(k%2!=0)
	printf("%c",a[k/2]);
	getch();
}