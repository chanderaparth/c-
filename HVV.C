#include<stdio.h>
#include<conio.h>

int main()

{
    int product[5],price[5]= {700,100,5500,11000,8000} ;  //= {100,100,40,30,80}
    
    int i,Amt[5],disc_A[5],total,g_total=0,Bill_Amt[5],T_Amt=0; 

    float gst[5],disc[5];


    for(i=0;i<5;i++)
    {
	if(i==0){
      printf("\n[%d] Enter Keybord ",i);
    }
    else if(i==1){
      printf("\n[%d] Enter Mouse ",i);
    }
    else if(i==2){
       printf("\n[%d] Enter Moniter",i);
    }
    else if (i==3){
      printf("\n[%d] Enter Pro  ",i);
    }
    else if(i==4)
    {
      printf("\n[%d] Enter RAM ",i);
    }
	   printf("Qty  : ");
	   scanf("%d",&product[i]);
    }

     for (i=0;i<5;i++)
     {
        Amt[i]=(price[i]*product[i]);
        disc[i]=Amt[i]*0.10;
        disc_A[i]=Amt[i]-disc[i];
        total+=disc_A[i];
        gst[i]=disc_A[i]*0.18;
        g_total+=gst[i];
        Bill_Amt[i]=disc_A[i]+gst[i];
        T_Amt+=Bill_Amt[i];
     }

  
        printf("\nProduct  \tPeice         \tQty        \tAmt   \tDisc            \tDisc_Amt       \tGst         \tBill_Amt");
    for ( i=0;i<5; i++)
    {

    if(i==0){
      printf("\n[%d]Keybord ",i);
    }
    else if(i==1){
      printf("\n[%d]Mouse ",i);
    }
    else if(i==2){
       printf("\n[%d]Moniter",i);
    }
    else if (i==3){
      printf("\n[%d]Pro     ",i);
    }
    else if(i==4)
    {
      printf("\n[%d]RAM     ",i);
    }
    
        printf(" \t%d       \t%d         \t%d   %f          \t%d    \t%f  \t%d ",price[i],product[i],Amt[i],disc[i],disc_A[i],gst[i],Bill_Amt[i]);

    }
     printf("\n[0]Total \t\t\t\t\t\t\t                 %d      \t%d          %d ",total,g_total,T_Amt);

getch();
return 0;

}