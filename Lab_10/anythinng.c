#include <stdio.h>

double Avg() {
    double sum = 0.0;
    double number;
    int count = 0;

    printf("Enter numbers (enter -1 to calculate the average):\n");

    while (1) {
        scanf("%lf", &number);

        if (number == -1) {
            if (count == 0) {
                printf("No numbers entered.\n");
            } else {
                double average = sum / count;
                
            }
        }

        sum += number;
        count++;
    }
}

int main() {
    double average = Avg();
    printf("Average: %.2lf\n", average);
    return 0;
}
