#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the strength of female students = ");
    scanf("%f",&a);
    printf("Enter the strength of male students = ");
    scanf("%f",&b);
    printf("There are %.4f%% male and %.4f%% female students in the class",(b/(a+b))*100,(a/(a+b))*100);
return 0;
}