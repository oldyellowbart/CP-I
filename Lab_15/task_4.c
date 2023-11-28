/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/28/2023
  Purpose       :  task_4  to get know about the array and print reverse numbers 
  Disclaimer    :  open source Code has been writen for educational purpose only
  -------------------------------------------------------------------------------*/
#include <stdio.h>
int highest =0;
int lowest = 0;
int roll =0;
int l_roll =0;
int main()
{
    printf("This program displays the marks of  computer programming\n\n\n\n ");
    int v=0;
    printf("Enter total Number of Students in the class B  >>");
    scanf("%d",&v);
    float average =0;
    int sum =0;
    int marks[v];
    for (int i = 0; i < v; i++)
    {
        printf("\nEnter marks of roll no  %2d  =>> ",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < v; i++)
    {
        sum = marks[i]+sum; //sum of array
         average = sum/v;// average calculation 
        if (marks[i]>marks[i+1])
        {
            highest = marks[i];
            roll =i+1;
        }
        if (marks[i]<marks[i+1])
        {
            highest = marks[i+1];
            roll=i;
        }
    }
    
    printf("********************************************************\n");
    printf("*         marks of Computer Programming -I             *\n");
    printf("********************************************************\n");
    printf("*         Average  Marks = %.2f                        *\n",average);
    printf("*         Failing Students = %2d                        *\n");
    printf("*         Highest marks %2d Obtained by Roll No. %2d     *\n",highest,roll);
    printf("*         Lowest  marks %2d Obtained by Roll No. %2d     *\n",lowest,l_roll);
}