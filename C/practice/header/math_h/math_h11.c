#include <stdio.h>
#include <math.h>

//Finding log using log 

int main() {

    int a, b;
    double alog, blog;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if(a > 0 && b > 0){
        alog = log(a);
        blog = log(b);
    }
    else{
        printf("Logarith is undefined for zero or negative number");
        return 1;
    }

    printf("The log of first number is = %.2lf\n", alog);
    printf("The log of second number is = %.2lf\n", blog);

    double c = alog + blog;

    printf("The sum of both numbers log is = %.2lf", c);

    return 0;
}