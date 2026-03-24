#include <stdio.h>

int main () {

    int first;
    int second;
    char symbol;
    float result;

    printf("Enter first number: ");
    scanf("%d", &first);

    printf("Enter an operator (+, -, *, /, %%): ");         // we use %% to print a single %

    scanf(" %c", &symbol);                                       /* we give a space before %c because after the first scan we press enter, which makes a space which the
                                               next scanf thinks as a character and takes it as a input.*/

    printf("Enter second number: ");
    scanf("%d", &second);

    if(symbol == '+'){
        printf("Result: %d", first + second);
    }
    else if(symbol == '-'){
        printf("Result: %d", first - second);
    }
    else if(symbol == '*'){
        printf("Result: %d", first * second);
    }
    else if(symbol == '/'){
        if(second == 0){
            printf("Division by zero is not allowed.");
        }
        else{
            result = first / second;
            printf("Result: %f", result);
        }
    }
    else if(symbol == '%'){
        if(second == 0){
            printf("Division by zero is not valid");
        }
        else{
            result = first % second;
            printf("Result: %f", result);
        }
    }
    else{
        printf("Operator is invalid.");
    }

    return 0;
}
