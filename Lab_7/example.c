/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To Display a text based on grade  using switch  satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char a='0';
    printf("Enter you grade in CP-1 ..");
    scanf("%c",&a);
    switch (a)
    {
    case 'A'/* constant-expression */:
        printf("Excellent\n");/* code */
        break;
        case 'B':
        case'C':
        printf("Well Done\n");
        break;
        case'D':
        printf("You passed \n");
        break;
        case'F':
        printf("Better try gain\n");
        break;
        default:
        printf("Invalid Grade");
        break;
    }
    return 0;
}