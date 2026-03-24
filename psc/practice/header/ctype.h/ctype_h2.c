#include <stdio.h>
#include <ctype.h>
#include <string.h>

//checking digit using isdigit
//and finding the sum 

int main() {

    char input[50];
    int digit = 0;
    int sum = 0;

    printf("Input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isdigit(input[i])){
            digit++;
            sum += input[i] - '0';
        }
    }

    printf("Output:\n");
    printf("Digits = %d\n", digit);
    printf("Sum of digits = %d", sum);

    return 0;
}