/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  T6ask 8_1 to get know about the user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int AB(int); //function declearation of max
int main()
{
    int a=0,b=0,c=0;
    printf("Enter Number A\n");
    scanf("%d",&a);
  AB(a);
   return 0;
}
int AB(int q) // user defined function defination and (max)
{
    int d,e;
    if (q%2==0){printf("You Entered an Even Number !");}
    else{printf("Entered Number is Odd");}
    return d;
}