#include<stdio.h>
#include<conio.h>

int main()
{
int a,b,i,j;
clrscr();

for(a=0;a<3;a++)
{
  for(b=0;b<3;b++)
  {
    if(a==b)
    {
     printf(" %d ",1);
    }
  else
    {
     printf(" %d ",0);
    }
  }
     printf("\n");

}
getch();

}