#include <stdio.h>
#include <ctype.h>
#include <string.h>

//checking alphabets using isalpha

int main() {

    char input[50];
    int alphabets = 0;
    int non_alphabets = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isalpha(input[i])){
            alphabets++;
        }
        else{
            non_alphabets++;
        }
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Non-alphabets = %d\n", non_alphabets);

    return 0;
}