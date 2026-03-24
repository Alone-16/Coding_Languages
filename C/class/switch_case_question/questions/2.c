//Calculator

#include <stdio.h>

int main () {
    int first;
    int second;
    char symbol;
    float result;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &symbol);

    printf("Enter second number: ");
    scanf("%d", &second);

    switch(symbol) {
        case '+':
            printf("Result: %d", first + second);
            break;

        case '-':
            printf("Result: %d", first - second);
            break;

        case '*':
            printf("Result: %d", first * second);
            break;

        case '/':
            if(second == 0) {
                printf("Division by zero is not allowed.");
            } else {
                result = (float)first / second;   
                printf("Result: %f", result);
            }
            break;

        case '%':
            if(second == 0) {
                printf("Division by zero is not valid.");
            } else {
                printf("Result: %d", first % second); 
            }
            break;

        default:
            printf("Operator is invalid.");
            break;
    }

    return 0;
}
