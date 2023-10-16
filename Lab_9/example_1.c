#include<stdio.h>
void abc(int);
void main(){
    int a=0;
    printf("enter a number >>");
    scanf("%d",&a);
    abc(a);
}
void abc(int d){
    int c=0;
    while (c<d)
    {
        printf("the value of loop control variable is %d\n",c++);
    }
}