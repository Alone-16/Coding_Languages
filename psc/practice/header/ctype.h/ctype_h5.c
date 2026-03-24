#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking uppercase and lowercase using islower and isupper

int main() {

    char input[50];
    int uc = 0;
    int lc = 0;

    printf("Input: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    for(int i = 0; input[i] != '\0'; i++){
        if(isupper(input[i])){
            uc++;
        }
        else if(islower(input[i])){   //using if again because of digits
            lc++;
        }
    }

    printf("Output: ");
    printf("Uppercase = %d\n", uc);
    printf("        Lowercase = %d\n", lc);

    return 0;
}