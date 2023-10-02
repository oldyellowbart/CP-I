/*
 -------------------------------------------------------------------------------- 
  Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  02/10/23
  Purpose :  To Display a number in words  based on digit entered  using switch  satement  only
  -------------------------------------------------------------------------------*/
#include<stdio.h>
#include<stdio.h>
int main()
{
    int a=0;
    printf("enter the singal digit number");
    scanf("%d",&a);
    switch (a)
    {
    case 1/* constant-expression */:
       printf("One"); /* code */
        break;
        case 2/* constant-expression */:
       printf("two"); /* code */
        break;
        case 3/* constant-expression */:
       printf("three"); /* code */
        break;
        case 4/* constant-expression */:
       printf("four"); /* code */
        break;
        case 5/* constant-expression */:
       printf("five"); /* code */
        break;
        case 6/* constant-expression */:
       printf("six"); /* code */
        break;
        case 7/* constant-expression */:
       printf("seven"); /* code */
        break;
        case 8/* constant-expression */:
       printf("eight"); /* code */
        break;
        case 9/* constant-expression */:
       printf("nine"); /* code */
        break;
        case 0/* constant-expression */:
       printf("zero"); /* code */
        break;
    default:
    printf("invalid digit");
        break;
    }
    return 0;
}