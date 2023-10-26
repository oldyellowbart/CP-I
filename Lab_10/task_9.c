/*-------------------------------------------------------------------------------- 
  Author        :  Haseeb-ul-hassan
  Roll No       :  2022MC58
  Dated         :  24/10/23
  Purpose       :  Task task_9.c to get know about the nested loops
                    and print sum of even and odd numbers  till given number
  Disclaimer    :  open source Code has been writen for educational purpose only 
  -------------------------------------------------------------------------------*/
  #include <stdio.h>

int Even_Odd_numbers(int n) {
    if (n < 0) {
        printf("Negative numbers are not allowed.\n");
        return 0;
    }

    int sum = 0;

    if (n % 2 == 0) {  // Check if the number is even
        for (int i = 0; i <= n; i += 2) {
            sum += i;
              printf("%d +",i);
        }
        printf(" =%d", sum);
    } else {
        for (int i = 1; i <= n; i += 2) {
            sum += i;
            printf("%d +",i);
        }
       printf(" =%d", sum);
    }

    return sum;
}

int main() {
    int user_input;

    printf("Enter a number: ");
    if (scanf("%d", &user_input) != 1) {
        printf("Invalid input. Please enter a valid number.\n");
        return 1;
    }

    Even_Odd_numbers(user_input);

    return 0;
}
