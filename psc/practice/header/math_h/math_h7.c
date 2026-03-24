#include <stdio.h>
#include <math.h>

//finding the round value and finding its avg using round 

int main() {

    float num1;
    float num2;
    float num3;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    float result1 = round(num1);
    float result2 = round(num2);
    float result3 = round(num3);

    float avg = (result1 + result2 + result3) / 3;

    printf("The avg of the round value = %.2f", avg);

    return 0;
}

