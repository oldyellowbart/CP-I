/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  11/27/2023
  Purpose       :  task 14_1  to print sum of series using  recursion
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include<stdio.h>
  int sumofseries(int );
  int main()
  {
    int num=0;
    printf("Enter the Number =>>");
    scanf("%d",&num); 
    for (int i = 0; i < num ; i++)
    {
        if (num -1 == i)
        {
            printf("%d = ",num-i);
            printf("%d",sumofseries(num));
        }
        else{
        printf("%d + ",num-i);
        }}}
int sumofseries(int q)
{      
        if (q == 0)
        {
            return 0;
        }
        if (q == 1)
        {
            return 1;
        } 
       return q+ sumofseries(q-1);

}  