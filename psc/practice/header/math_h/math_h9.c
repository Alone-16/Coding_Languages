#include <stdio.h>
#include <math.h>

//finding the remainder of decimal and float value using fmod

int main() {

    float num1;
    float num2;

    printf("Enter the first number: ");
    scanf("%f",&num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    float result = fmod(num1, num2);

    printf("The reaminder is = %.2f", result);

    return 0;
}