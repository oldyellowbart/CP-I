#include<stdio.h>
int main()
{
    float a;
    printf("Enter the basic salery = ");
    scanf("%f",&a);
    printf("\nThe gross sallery is %f",((a+(a*0.30))+(a*0.15)));
    return 0;
}