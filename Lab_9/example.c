#include<stdio.h>
int main()
{
    int a=1,b=1,c=3;
    if (a==b){if (a==c){printf("The Triangle is Equiliteral");}
            else{printf("The Triangle is isosceles");}}
    else{if (b==c || a==c){printf("The triangle is isosceles");}
        else{printf("scalene");}}
}