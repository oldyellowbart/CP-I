/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  24/10/23
  Purpose       :  Task task_8.c to get know about the nested loops
                    and print matrix  till given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
void test_scores(int,float);
void main(){

int a=0,b=0;
printf("enter the number of students >>");
scanf("%d",&a);
printf("enter the number of subjects >> ");
scanf("%d",&b);
test_scores(a,b);
}
void test_scores(int q,float r){
    int g=0;
    
for (int i = 0; i < q; i++)
{int h=0;
    for (int j = 0; j < r ; j++)
    {
        printf("Enter the %d subject marks of %d student >>",j+1,i+1);
        scanf("%d",&g);
        h=h+g;
    }
printf(" \t The average of subjects is = %.2f\n",h/r);
}
}