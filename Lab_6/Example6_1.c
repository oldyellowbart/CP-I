/*Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To print a number using the if  satement */
#include<stdio.h>
int main()
{
    int a ;
    printf("Enter the number");
    scanf("%d",&a);
    if(a<50)
    {
        printf("Given number is less then 50\n");
    }
    printf("Given number is %d",a);
    return 0;
    
}