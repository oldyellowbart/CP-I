//written by 2022mc58
#include<stdio.h>
void table(int);
    void main()
        {int a=0;
        printf("Enter the number>>>");
        scanf("%d",&a);
        table(a);}
void table(int q){
int l=0;
for (l=0; l < 10;l++){printf("%dx%d=%d\n",q,l+1,q*(l+1));}}