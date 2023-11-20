/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  20/11/23
  Purpose       :  Task 12_1 to get know about the break command
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
float a=0,b=0;
        void sum(float,float);
            void sub(float,float);
                void multiply(float,float);
                    void divide(float,float);
                        void main()
                        {
                        printf("Enter 1st Operend >>\n");
                        scanf("%f",&a);
                        printf("Enter 2st Operend >>\n");
                        scanf("%f",&b);
                        sum(a,b);
                        sub(a,b);
                        multiply(a,b);
                        divide(a,b);
                        }
        void sum(float q,float r ){
            printf("sum of 1st and  2st Operend  is %.2f>>\n",q+r);
        }
    void sub(float q,float r )
  {
    printf("sub of 1st and  2st Operend  is %.2f>>\n",q-r);

  }
      void multiply(float q,float r )
  {
    printf("multiply of 1st and  2st Operend  is %.2f>>\n",q*r);

  }
      void divide(float q,float r )
  {
    printf("divide of 1st and  2st Operend  is %.2f>>\n",q/r);

  }

  