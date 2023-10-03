/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  03/10/23
  Purpose :  To find candidates eligible for insurance
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int main()
  {
    int  a,b,c;
    printf("Enter the 1st Number");
    scanf("%d",&a);
    printf("Enter the 2nd Number");
    scanf("%d",&b);
    printf("Enter the 3rd Number");
    scanf("%d",&c);
    if (a>b)
        {if (a>c){printf("First number is the largest %d",a);}
        else{}}
        
    else{if (b>c){printf("Second  number is the largest %d",b);}
        else{printf("Third Number is Largest %d",c);}}
return 0;
  }