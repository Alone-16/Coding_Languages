#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Counting digits, alphabets and special character.

int main() {

    char input[50];
    int digit = 0;
    int alphabet = 0;
    int spch = 0;

    printf("Input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isdigit(input[i])){
            digit++;
        }
        else if(isalpha(input[i])){
            alphabet++;
        }
        else{
            spch++;
        }
    }

    printf("Output:\n");
    printf("Alphabets = %d\n", alphabet);
    printf("Digits: %d\n", digit);
    printf("Special Characters = %d\n", spch);

    return 0;
}