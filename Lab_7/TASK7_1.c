/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  03/10/23
  Purpose :  To get a 4 diit number only
    if else satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a five digit number >>");
    scanf("%d",&a);
        if (a>9999){if(a<=99999){printf("You entered a  5 digit Number %d",a);}
                   else{printf("Enter a Valid 5 digit Number");}}
        else{printf("Enter a Valid 5 digit Number");}
    return 0;

}