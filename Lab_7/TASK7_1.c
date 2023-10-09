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