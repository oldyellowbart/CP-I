
/*-------------------------------------------------------------------------------- 
  Author        : Esha Amjad 
  Roll No       :  2022MC73
  Dated         :  10/10/23
  Purpose       :   Mid Evaluation
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int num,a,b,c;
    printf("enter num");
    scanf("%d",&num);
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    int sum=a+b+c;
    int result=num/sum;
    //checking while the number is 3-digit
    if (num<=999)
    {
       printf("\nthe number is  valid");
    }
    else
        {
         printf("\nthe number is not valid");   
        }
        //checking while the number is Harshad or not
    if(num%sum==0)
        {
         printf("\nthe number is harshad and the vale is %d",result);
        }
    else
        {
            printf("\nthe number is not harshad");
        }
    return 0;
}