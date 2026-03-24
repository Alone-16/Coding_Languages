#include <stdio.h>
#include <string.h>
#include <ctype.h>

//making all the first character after ' ' is uppercase

int main() {

    char input[50];

    printf("Input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        input[i] = tolower(input[i]);
    }

    for(int i = 0; input[i] != '\0'; i++){
        if(i == 0){
            input[i] = toupper(input[i]);
        }
        else if(input[i-1] == ' '){
            input[i] = toupper(input[i]);
        }
    }

    printf("Output: %s", input);

    return 0;
}