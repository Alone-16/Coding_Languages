#include <stdio.h>
#include <ctype.h>
#include <string.h>

//checking whitespaces using isspace

int main() {

    char input[50];
    int whitespace = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isspace(input[i])){
            whitespace++;
            printf("Whitespace at position %d\n", i);
        }
    }

    printf("Whitespace count = %d", whitespace);

    return 0;
}