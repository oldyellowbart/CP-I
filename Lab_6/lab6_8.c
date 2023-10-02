/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  02/10/23
  Purpose :  To display a four digit numvber using the if else satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a=0;
    printf("enter a four digit number");
    scanf("%d",&a);
    if (a<=9999&&a>=1000)
    {
        printf("you entered a valid number %d",a);
    }
    else
    {
        printf("invalid ");
    }
}