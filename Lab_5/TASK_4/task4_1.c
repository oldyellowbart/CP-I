#include<stdio.h>// written by 2022mc58
int main()
{
    float a;
    printf("Enter the  amount on sale invoice >>");
    scanf("%f",&a);
    printf("Total amount to be paid is %f",a+(a*0.17));
    return 0;
}