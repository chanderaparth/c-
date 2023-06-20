#include<stdio.h>
#include<conio.h>

int divs(int value, int *max, int *min)
{   
    for (int i = 2; i < value; i++)
    {  
        if (value % i == 0){
            if (*max == 0){
                *min = i;
            }
            *max = i;   
        }   
    }
    if (*max != 0)
        return 1;
    else
        return 0;

}

int main(void)
{
   int n,max = 0,min = 0,result;

   printf("type a number bigger than 2\n");
   scanf("%d",&n);

   divs(n,&max, &min);
   result = divs(n,&max, &min);
   if (result == 1)
      printf("min is: %d max is: %d",min,max);


   printf("%d\n",result);

   getch();
   return 0;

}