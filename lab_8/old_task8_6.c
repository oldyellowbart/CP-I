/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  T6ask 8_6 to get know about the user defined function
                    and calculate the sum of the fdactorail series
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int AB(int); //function declearation of max
int main()
{
    int a=0;
    float sd;
    printf("Enter Number A\n");
    scanf("%d",&a);
     sd=AB(a);// calling function
  
            if (a<=10)
            {
             printf("factorial sum of %d is %.3f",a,sd);
            }
            else{printf("Please Enter within 10\n");} 
   return 0;
}
int AB(int q) // user defined function defination and (ab)
{
    float e;
   switch (q)
  {
   case 1:
   e=1;
    break;
    case 2:
  e=(q*(q-1));
    break;
    case 3:
  e=(1/(q*(q-1)*(q-2)))+1;
    break;
    case 4:
  e=(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 5:
  e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 6:
  e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 7:
  e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 8:
  e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 9:
  e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)*(q-8)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
    case 10:
 e=(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)*(q-8)*(q-9)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)*(q-8)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)*(q-7)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)*(q-6)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)*(q-5)))+(1/(q*(q-1)*(q-2)*(q-3)*(q-4)))+(1/(q*(q-1)*(q-2)*(q-3)))+(1/(q*(q-1)*(q-2)))+1;
    break;
  default:
  printf("Please Enter within 10\n");
    break;
  }
    return e;
}