//written  by 2022mc58
#include<stdio.h>
        void tableadvance(int,int);
                    void main()
                    {
                    int a=0,b=0;
                    printf("Enter a number >>");
                    scanf("%d",&a);
                    printf("Enter the limit >>");
                    scanf("%d",&b);
                    tableadvance(a,b);
                    }
        void tableadvance(int q,int r)
        {
        for (int i = 1;i < r+1; i++)
        {
        printf("%d\tx\t%d\t=\t%d\n",q,i,q*i);
        }
        }