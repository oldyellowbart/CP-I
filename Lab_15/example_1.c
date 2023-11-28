/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/28/2023
  Purpose       :  example  to get know about the array
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int main()
  {
    int oddNumbers[10];

    for (int i = 0; i < 10; i++)
    {
        oddNumbers[i]=2*i+1;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Element %2d of Array = oddNumbers[%d] = %2d \n",i+1,i,oddNumbers[i]);
    }
    return 0;
    }