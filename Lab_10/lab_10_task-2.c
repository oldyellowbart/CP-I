#include<stdio.h>
void  Stars_funct_2(int a)
{
    for(int i=0;i<a;i++){
        for(int j=0;j<=a;j++){
            for(int k=a;k>j;k--){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
 int a;
 printf("Enter number<<");
 scanf("%d",&a);
 Stars_funct_2(a);
 return 0;
}