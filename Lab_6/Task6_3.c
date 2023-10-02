/*Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To seprate even odd numbers using the if else satement */
  #include<stdio.h>
  int main(){
    int  a;
    printf("Enter the number");
    scanf("%d",&a);
    if (a%2 == 0 ){printf("You enterd an even Number");}
    else if (a%2 != 0){printf("You entered an odd Number");}
    return 0;
  }