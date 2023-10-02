/*
======================================================================================
Author  :  Haseeb-ul-hassan                                                          =
  Roll No :  2022MC58                                                                =
  Dated   :  26/09/23
  Purpose :  To seprate positive and negitive inteeger  using the if else satement */
  #include<stdio.h>
  int main()
  {
    int  a;
        printf("Enter a number >>");
        scanf("%d",&a);
                if (a>0 ){printf("You enterd a positive Number\n The Magnitude is %d",a);}
                else if (a<0){printf("You entered a negitive Number \n The Magnitude is %d",-a);}
    return 0;
  }