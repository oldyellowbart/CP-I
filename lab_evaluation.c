/*******************************************************************************
   NAME:Esha Amjad                 PURPOSE:Evaluation(II) 
   REGESTRATION NUMBER:2022_MC_73                               
   ****************************************************************************/
  #include<stdio.h>
  int i;
  //Main Function
  int main()
  {
    int n,prime,procedure;
    printf("enter a number <<<<");
    scanf("%d",&n);
    printf("enter a procedure <<<<");
    scanf("%d",&procedure);
   switch (procedure)
   {
   case 1://case:1 is for RECURSIVE 
   {
     i=n/2;
    prime=isprimerecursive(n);
    if (prime==1)
    {
        printf("you enter a prime  number %d",n);}
    else
    {
       printf("the enter number is not prime");
    }
   }
    break;
   case 2://case:2 is for ITERATIVE
   {
    isprimeiterative(n);
   }
   default:
    break;
   }
    return 0;
  }
  
//function:1
  int isprimerecursive(int n)
  { 
    if (i==1)
    {
       return 1;
    }
    else if (n%i==0)
    {
        return 0;
    }
    else{
            i=i-1;
            return isprimerecursive(n);
    }
    
    
  }
  //function:2
 int isprimeiterative(int n)
 {
    int f=0;
    for (int i = 2; i <=n/2; i++)
    {
        if (n%i==0)
        {
           f++;
        
        break;
    }
    }
    if (f==0 && n!=1)
    {
      printf("your enter number is prime %d",n);
    }
    else
    {
    printf("your enter number is not prime");
    }

    return 0;
    
    
 }