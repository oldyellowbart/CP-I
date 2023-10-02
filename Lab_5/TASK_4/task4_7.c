#include<stdio.h>// written  by 2022mc58 on 26/9/23
int main()
{
    float a;
    printf("Enter the distance between 2 cities (in KM)>>");
    scanf("%f",&a);
    printf("Distance between 2 cities is %.0f meters \n",a*1000);
    printf("Distance between 2 cities is %.0f feet\n",a*3280.84);
    printf("Distance between 2 cities is %.0f inches \n",a*39370.1);
    printf("Distance between 2 cities is %.0f cm\n",a*100000);
    return 0;

}