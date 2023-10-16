/*-------------------------------------------------------------------------------- 
  Author        : Esha Amjad 
  Roll No       :  2022MC73
  Dated         :  10/10/23
  Purpose       :  evaluation
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int num;
    printf("enter num");
    scanf("%d",&num);
    int a,b,c;
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    int sum=a+b+c;
    if (num<=999)//3 digit number
    {
        printf("the value is %d",num/sum);
       
    }
    else
        {
         printf("the number is not valid");   
        }
    return 0;
}