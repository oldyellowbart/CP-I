//Written by 2022mc58
#include<stdio.h>
void stars(int);
            void main()
            {
            int a=0;
            printf("Enter the Number>> ");
            scanf("%d",&a);
            stars(a);
            }
            
void stars(int q)
{
int f=0;
for (f; f<q; f++)
{
printf("*\n");
}
}