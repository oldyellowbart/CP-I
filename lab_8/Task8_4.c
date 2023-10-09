/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  T6ask 8_1 to get know about the user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
#include<math.h>
int AB(int); //function declearation of max
int main()
{
    int a=0;
    printf("Enter Number A\n");
    scanf("%d",&a);
  AB(a);
   return 0;
}
int AB(int q) // user defined function defination and (max)
{
    float d,e;
   if (q>=0)
   {
    d=q;
   }
   else{d=-q;}
    
    e=sqrt(d);
    
    printf("Its square root is %.2f",e);
    return d;
}