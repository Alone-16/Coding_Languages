#include <stdio.h>
#include <math.h>

//printing the absolute value using fabs
//example = -1.23 -> 1.23

int main() {
    double num;

    printf("Enter a decimal value: ");
    scanf("%f", &num);

    double result = fabs(num);

    printf("%.2lf", result);

    return 0;
}
