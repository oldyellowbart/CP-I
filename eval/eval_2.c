/*--------------------------------------------------------------------------------
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022-MC-58
  Dated         :  05/12/2023
  Purpose       :  final evaluation to get know about the skills program will ask user to use ilteration or recursion
  Disclaimer    :  open source Code has been writen for educational purpose only
  IDE           :  VS code 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int isprimeiterative(int);
int isprimerecursive(int);
void main()
{
    int selection = 0;
    printf("Enter the mode of checking \n select 1 for iterative \n select 2 for recursive   \n input >>  ");
    scanf("%d",&selection);
    switch (selection) //selection  of function to call
    {
    case 1:
       isprimeiterative(100); 
        break;
    case 2:
       isprimerecursiveive(100);
        break;
    default:
    printf("\nPlease enter 1 or 2\n");  // if the user input wrong value
        break;
    }
}
int isprimeiterative(int q) //function 
{
    printf("\n2 3 5 7 ");   
    int k=0;
    for (int i = 2; i < q; i++) // loop for 100 values
    {
        
        int a=0;
        if (i%2==0) //checking of divisible by 2
        {
          k=0;
        }
        else if (i%3==0) //checking of divisible by 3
                    {
                        k=0;
                    }
        else if (i%5==0) //checking of divisible by 5
        {
            k=0;
        }
        else if (i%7==0) //checking of divisible by 7
        {
           k==0;
        }
        else if (i%11==0) //checking of divisible by 11
        {
            k=0;
        }
        else
        {
            k=i; // if number is not divisible by this all then it will be stored in another variable
        }
       if (k==i)
       {
       printf("%d ",k); // printing of sequence 
       }
        
    }
    return 0 ;
}
//recursive function 
int isprimerecursive(int r)  
{
 int l=0;
 int m=3;
    for (int i = 0; i < r ; i++)
    {
        l=l+2;
         printf("%d ",isprimerecursive(l));
         m=m+4;
         printf("%d ",isprimerecursive(m));
    }
    
}
   
