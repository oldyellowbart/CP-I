/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/28/2023
  Purpose       :  task_3  to get know about the array and print reverse numbers 
  Disclaimer    :  open source Code has been writen for educational purpose only
  -------------------------------------------------------------------------------*/
#include <stdio.h>
int main()
{
    int a=0;
    int days_per_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the month number >>");
    scanf("%d",&a);
    printf("Month %d has %d days .",a,days_per_month[a]);
    return 0;
}