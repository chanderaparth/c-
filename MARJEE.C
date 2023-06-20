#include<stdio.h>
int main()
{
	char str[20],str1[20];
	int i,j,k=0;
	printf("Enter string: ");
	//scanf("%s",&str);
	gets(str);
	printf("Enter string: ");
	gets(str1);
	//printf("Your string is:%s",str);
	i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	j= i-1;
	while(k<=j)
	{
		str[i++]=str1[k];
		k++;
	}
	str[i]='\0';
	printf("%s",str);
	return 0;
}