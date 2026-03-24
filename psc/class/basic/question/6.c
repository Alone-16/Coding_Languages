#include <stdio.h>

//prime number

int main() {
    int n, count = 0, num = 2, i, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    while (count < n) {
        isPrime = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
