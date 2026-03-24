#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character is alphanumeric using isalpnum

int main() {

    char input[50];
    int alpnum = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isalnum(input[i])){
            alpnum++;
        }
    }

    printf("Alphanumeric = %d", alpnum);

    return 0;
}