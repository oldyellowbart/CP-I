//written by 2022mc58
#include<stdio.h>
        void fact(int);
void main()
{
int a=0;
printf("enter the number>>>");
scanf("%d",&a);
fact(a);
}
        void fact(int q)
        {
            if (q==0)
            {
                printf("01=0\n");
            }
            else if (q<0)
            {
               printf("Enter a valid / positive number\n");
            }
            else if (q>0)
            {
                int r=1;
        for (int i=0; i < q; i++)
        { 
        r=r*(q-i);
        }
        printf("%d!=%d",q,r);
        };
        }