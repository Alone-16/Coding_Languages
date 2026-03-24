#include <stdio.h>
#include <math.h>

//Printing number to its nearest rounded decimal value using ceil

int main() {

    float num1;
    float num2;
    double sum;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    double result1 = ceil(num1);
    double result2 = ceil(num2);

    sum = result1 + result2;

    printf("Sum of Ceil value: %.2lf", sum);

    return 0;
}