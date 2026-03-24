#include <stdio.h>
#include <math.h>

// Finding square root using sqrt

int main() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    if (input < 0) {
        printf("Square root of negative numbers is not defined in real numbers.\n");
    } else {
        double sq_rt = sqrt(input);
        printf("The square root is = %.2lf\n", sq_rt); // double instead of float
    }

    return 0;
}
