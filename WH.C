#include<stdio.h>
#include<conio.h>
int main()
{
    int no, nd, sd, rem;
    clrscr();
    printf("Enter a Number : ");
    scanf("%d", &no);
    nd = 0;
    sd = 0;
    while (no > 0)
    {
        rem = no % 10;
        nd = nd + 1;
        sd = sd + rem;
        no = no / 10;
    }   
    printf("The number of digit is %d", nd);
    printf("\nThe sum of digit is %d", sd);
    getch();
    return 0;
}