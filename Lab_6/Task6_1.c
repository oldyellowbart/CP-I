/*Author  :  Haseeb-ul-hassan
  Roll No :  2022MC58
  Dated   :  26/09/23
  Purpose :  To print a Congratulatory message based on CGPA using the if else satement */
  #include<stdio.h>
  int main()
  {
    float a ;
    printf("Enter your  Final CGPA =");
    scanf("%f",&a);
    if(a>=3.7)
    {
      printf("Congratulations ! You have completed the degree");
    }
    else if(a<3.7)
    {
      printf("Congratulations ! You have completed the degree \"With Distinction\" ");
    }
    return 0;
  }