/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  T6ask 8_1 to get know about the user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int max(int,int); //function declearation of max
int main()
{
    int a=0,b=0,c=0;
    printf("Enter Number A\n");
    scanf("%d",&a);
    printf("Enter Number B\n");
    scanf("%d",&b);
   c=max(a,b); //function calling of max
   printf("Maximum value is %d",c);
   return 0;
}
int max(int q,int r) // user defined function defination and (max)
{
    int d;
    if (q>r){ d=q;}
    else{d=r;}
    return d;
}