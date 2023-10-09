/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  Task 8_5 : to calculate factorial using  user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int AB(int); //function declearation of max
int main()
{
    int a=0,fact;
    printf("Enter Number A >>\n");
    scanf("%d",&a);
            fact=AB(a); // calling function
  printf("%d! = %d",a,fact);
   return 0;
}
int AB(int q) // user defined function defination and (ab)
{
    int e;
   switch (q)
  {
   case 1:
   e=1;
    break;
    case 2:
  e=(q*(q-1));
    break;
    case 3:
  e=(q*(q-1)*(q-2));
    break;
    case 4:
  e=(q*(q-1)*(q-2)*(q-3));
    break;
    case 5:
  e=(q*(q-1)*(q-2)*(q-3)*(q-4));
    break;
    case 6:
  e=(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5));
    break;
    case 7:
  e=(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6));
    break;
    case 8:
  e=(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7));
    break;
    case 9:
  e=(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)*(q-8));
    break;
    case 10:
 e=(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)*(q-8)*(q-9));
    break;
  default:
  printf("Please Enter within 10");
    break;
  }
    return e;
}