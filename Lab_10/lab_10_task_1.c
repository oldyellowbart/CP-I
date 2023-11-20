#include<stdio.h>
void print_triangle(int num)
{
    for(int i=0;i<num; i++){
        for(int j= num;j > i;j--){
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int num;
    printf("Enter number<<");
    scanf("%d",&num);
    print_triangle(num);
    return 0;
}