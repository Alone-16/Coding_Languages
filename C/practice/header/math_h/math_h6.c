#include <stdio.h>
#include <math.h>

//finding the largest integer less than or equal to a given number using floor
//better to use double

int main() {

    float num1;
    float num2;
    float prod;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    float result1 = floor(num1);
    float result2 = floor(num2);

    prod = result1 * result2;

    printf("The product of floor value = %.2f", prod);

    return 0;
}