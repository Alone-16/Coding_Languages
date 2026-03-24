#include <stdio.h>
#include <math.h>

//Finding the log of base 10 using log10

int main() {

    double num1, num2, num3;
    double log1, log2, log3;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter third number: ");
    scanf("%lf", &num3);

    if(num1 > 0 && num2 > 0 && num3 > 0){
        log1 = log10(num1);
        log2 = log10(num2);
        log3 = log10(num3);
    }
    else{
        printf("Logarith is undefined for zero or negative number");
        return 1;
    }

    double avg = (log1 + log2 + log3) / 3;

    printf("The average of the log of all three is = %lf", avg);

    return 0;
}