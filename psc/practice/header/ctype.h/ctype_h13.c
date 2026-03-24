#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character is a hexadecimal digit using isxdigit
//for example input = 123 ; hex = 3

int main() {

    char input[50];
    int hexcount = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    for(int i = 0; input[i] != '\0'; i++){
        if(isxdigit(input[i])){
            hexcount++;
        }
    }

    printf("punctuation count = %d", hexcount);

    return 0;
}