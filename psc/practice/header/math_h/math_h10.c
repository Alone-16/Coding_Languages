#include <stdio.h>
#include <math.h>

//Finding exponent using exp

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    float expont1 = exp(num);
    float expont2 = exp(-num);

    printf("The positive exp: %f\n", expont1);
    printf("The negative exp: %f\n", expont2);

    float sum = expont1 + expont2;

    printf("The sum of the negative and positive exp = %f", sum);

    return 0;
}