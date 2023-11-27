/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/27/2023
  Purpose       :  example  to get know about the recursion
                   and print the factorial  of given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int fibonacci(int );
  void main()
  {
    int num=0;
    printf("Enter the number =>>\n");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        int ;
        printf("%d \n",fibonacci(i));
    }
    }
    int fibonacci(int q)
    {
        if (q == 0)
        {
            return 0;
        }
        if (q == 1)
        {
            return 1;
        }
        
        return fibonacci(q-1)+ fibonacci(q-2);
        
    }