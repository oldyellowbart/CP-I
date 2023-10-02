#include<stdio.h> // written by 2022mc58 on 26/9/23
int main()
{
    float a,b,c,d,e;
    printf("Enter the marks of Vector and complex anaylasis  >>");
    scanf("%f",&a);
    printf("Enter the marks of Engineering dynamics  >>");
    scanf("%f",&b);
    printf("Enter the marks of Digital logic design >>");
    scanf("%f",&c);
    printf("Enter the marks of Computer programming I >>");
    scanf("%f",&d);
    printf("Enter the marks of Electrical machinery  >>");
    scanf("%f",&e);
    printf("Aggregate marks obtained by student are = %.0f ",a+b+c+d+e);
    printf("\n Percentage marks obtained by student are %.0f%%",((a+b+c+d+e)/500)*100);
    return 0;
    
}