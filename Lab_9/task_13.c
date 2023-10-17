/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_13 to get know about the loops
                   and print the datesheet with ampersend and percentage sign using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star(int,char);
            void main()
            {
            int a=50;
            char f='$';
            char h='%';
            star(a,f);
            printf("Date\t\tNo\tSubject\n");
            star(a,f);
            printf("November,\t1\tVector and complex analysis\nNovember,\t2\tEngineering Dynamics\nNovember,\t3\tDigital logic design\nNovember,\t4\tComputer Programing-I\nNovember,\t5\tTranslation of Hly Quran-II\nNovember,\t6\tElectrical Machinery\n");
            star(a+5,h);
            }
                    void star(int q,char r)
                    {
                        for (int i = 0; i < q; i++)
                        {
                            if (r=='$')
                            {
                                printf("$");
                            }
                            else if (r=='%')
                            {
                                printf("%%");
                            }
                            else{printf("Please Enter %% or $");}
                            
                            
                        }
                        printf("\n");
                    }