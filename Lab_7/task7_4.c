  #include<stdio.h>
  int main()
  {
    char a,b;
    int c;
    printf("Enter Your Martial Statsus (M/S) >>\n");
    scanf(" %c",&a);
    printf("Enter Your Gender (M/F)\n");
    scanf(" %c",&b);
    printf("Enter your Age\n");
    scanf("%d",&c);
    switch (a)
    {
    case ('S'): if (b='M') {if (c>30){printf("Congratulations ! You are eligible for the insurance\n ");}else{if (c>25)
                        {printf("Congratulations ! You are eligible for the insurance\n");}
                    
                    else{printf("We are sorry you are not elligible for insurance");}
                    }}
                else{printf("We are sorry you are not elligible for insurance")
                   ;}
        
        break;
        default:
     printf("Congratulations ! You are eligible for the insurance ");
        break;
    }

   
return 0;
  }