#include <stdio.h>
#include <string.h>
#include <ctype.h>

//coverting strings into uppercase or lowercase using toupper and tolower

int main() {

    char input[50];
    
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        input[i] = toupper(input[i]);
    }
    printf("Uppercase = %s\n", input);

    for(int i = 0; input[i] != '\0'; i++){
        input[i] = tolower(input[i]);
    }
    printf("Lowercase = %s", input);

    return 0;
}