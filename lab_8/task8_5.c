/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  09/10/23
  Purpose       :  Task 8_5 : to print date using user defined function
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
#include<stdio.h>
int Date (int,int,int); //function declearation of max
int main()
{
    int a=0,b=0,c=0;
    printf("Enter  Year >>\n");
    scanf("%d",&a);
    printf("Enter  Month >>\n");
    scanf("%d",&b);
    printf("Enter  Day >>\n");
    scanf("%d",&c);
}
int Date(int p,int q,int r) // user defined function defination year,month,date
{
    char e;
    int f=0,g=0;
   switch (q)
  {  
   case 1:
   e='January';
    break;
    case 2:
  e='Feburary';
    break;
    case 3:
  e='March';
    break;
    case 4:
  e='April';
    break;
    case 5:
  e='May';
    break;
    case 6:
  e='June';
    break;
    case 7:
  e='July';
    break;
    case 8:
  e='August';
    break;
    case 9:
  e='September';
    break;
    case 10:
  e='October';
    break;
    case 11:  
  e='November';
  break;
  case 12:
  e='December';
  break;
  default:
  printf("Please Enter from 1 to  10\n");
    break;
  }
  if (p>0){f=p;}
  else{printf("Enter a valid year greater then 0");}


  if(q=1){if (r>0 && r<31){f=r;}}
  else{printf("Please enter within 1-31");}
  if(q=2){if (r>0 && r<28){f=r;}}
  else{printf("Please enter within 1-28");}
  if(q=3){if (r>0 && r<31){f=r;}}
  else{printf("Please enter within 1-31");}
  if(q=4){if (r>0 && r<30){f=r;}}
  else{printf("Please enter within 1-30");}
  if(q=5){if (r>0 && r<31){f=r;}}
  else{printf("Please enter within 1-31");}
  if(q=6){if (r>0 && r<30){f=r;}}
  else{printf("Please enter within 1-30");}
  if(q=7){if (r>0 && r<31){f=r;}}
  else{printf("Please enter within 1-31");}
  if(q=8){if (r>0 && r<31){f=r;}}
  else{printf("Please enter within 1-31");}
  if(q=9){if (r>0 && r<30){f=r;}}
  else{printf("Please enter within 1-30");}
    return e;
}