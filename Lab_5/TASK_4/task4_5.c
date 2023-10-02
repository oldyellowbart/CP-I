#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the total selling price of 15 items =");
    scanf("%f",&a);
    printf("Enter the total profit earned on  15 items =");
    scanf("%f",&b);
    printf("The cost price f one item is %.2f units ",(a-b)/15);
    return 0;

}
