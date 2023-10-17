/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  17/10/23
  Purpose       :  Task 9_11 to get know about the loops
                   and print the date sheet with no of starts using for loop
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  void star(int);
            void main()
            {
            int a=50;
            star(a);
            printf("Date\t\tNo\tSubject\n");
            star(a);
            printf("November,\t1\tVector and complex analysis\nNovember,\t2\tEngineering Dynamics\nNovember,\t3\tDigital logic design\nNovember,\t4\tComputer Programing-I\nNovember,\t5\tTranslation of Hly Quran-II\nNovember,\t6\tElectrical Machinery\n");
            star(a);
            }
    void star(int q)
    {
        for (int i = 0; i < q; i++)
        {
            printf("*");
        }
        printf("\n");
    }