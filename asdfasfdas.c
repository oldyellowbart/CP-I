#include <stdio.h>

void Conjecture(int n) {
    int step = 1;

    if (n < 2) {
        printf("Error: Please enter a positive integer greater than or equal to 2.\n");
        return;
    }

    while (n != 1) {
        printf("Step %d: %d\n", step, n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        step++;
    }

    printf("Step %d: 1\n", step); // Print the final step when n reaches 1
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    Conjecture(n);

    return 0;
}
