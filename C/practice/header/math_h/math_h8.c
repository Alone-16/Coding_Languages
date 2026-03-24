#include <stdio.h>
#include <math.h>

// Taking only the integer value and removing the decimal value using trunc
// trunc use double 

int main() {
    double num1, num2, num3, num4;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the third number: ");
    scanf("%lf", &num3);

    printf("Enter the fourth number: ");
    scanf("%lf", &num4);

    double r1 = trunc(num1);
    double r2 = trunc(num2);
    double r3 = trunc(num3);
    double r4 = trunc(num4);

    double sum = r1 + r2 + r3 + r4;

    printf("After trunc the numbers are: %.0lf, %.0lf, %.0lf, %.0lf\n", r1, r2, r3, r4);
    printf("The sum is = %.0lf\n", sum);

    return 0;
}
