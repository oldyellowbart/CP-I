//written by 2022mc58
#include<stdio.h>
        void square(int);
                    void main()
                    {
                    int a=0;
                    printf("Please enter a number to view its square and qube >>");
                    scanf("%d",&a);
                    square(a);
                    }
        void square(int q)
        {
        printf("NUMBER\t\tSQUARE\t\tQUBE\n");
        for (int i = 0; i < q; i++)
        {
        printf("%d\t\t%d\t\t%d\n",i+1,(i+1)*(i+1),(i+1)*(i+1)*(i+1));   
        }
        }