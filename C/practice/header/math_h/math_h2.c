#include <stdio.h>
#include <math.h>

//finding cube root using cbrt

int main() {

    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    double crt = cbrt(input);
    
    printf("The cube root is = %.2lf", crt);

    return 0;
}