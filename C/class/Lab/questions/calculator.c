#include <stdio.h>

//Making a calculator using goto 

int main() {

    double num1, num2;
    char opr;
    double result;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator(+, -, *, /): ");
    scanf(" %c", &opr);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (opr)
    {
    case '+':
        goto add;
        break;
    case '-':
        goto sub;
        break;
    case '*':
        goto prod;
        break;
    case '/':
        goto div;
        break;
    default:
        goto error;
        break;
    }


    add:
        result = num1 + num2;
        goto print;
    sub: 
        result = num1 - num2;
        goto print;
    prod:
        result = num1 * num2;
        goto print;
    div: 
        if(num2 == 0){
            printf("Division with zero is not allowed.");
            return 1;
        }
        else{
            result = num1 / num2;
            goto print;
        }
    error: 
        printf("Enter a valid operator.");
    print: 
        printf("The result is = %.2lf", result);

    return 0;
}