#include<stdio.h>
#include<conio.h>
int main()
{
    int i = 0;
    for (foo(); i == 1; i = 5)
	printf("%d",i);
	printf("%d\n",i);
}
int foo()
{
    getch();
    return 1;
}