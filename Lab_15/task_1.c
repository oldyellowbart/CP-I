/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/28/2023
  Purpose       :  task_1  to get know about the array
  Disclaimer    :  open source Code has been writen for educational purpose only
  -------------------------------------------------------------------------------*/
#include <stdio.h>
int main()
{
    int oddNumbers[6];
    for (int i = 1; i < 7; i++)
    {
        printf("Enter %2d number =>> ",i);
        scanf("%d",&oddNumbers[i]);
    }
    printf("you entered ");
    for (int i = 1; i < 7; i++) 
    {
        if (i==6)
        {
        printf(" %2d.",oddNumbers[i]);
        }
        else
        {
        printf(" %2d,",oddNumbers[i]);
        } 
    }
    return 0;
}