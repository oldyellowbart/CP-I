#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf("Enter Number A\n");
    scanf("%d",&a);
    printf("Enter Number B\n");
    scanf("%d",&b);
    if (a>b)
    {
        printf("Number A(%d) is Greater Then B(%d) \n",a,b);
    }
    else{printf("Number B(%d) is greater then Number A(%d)\n",b,a);}
return 0;
    
}