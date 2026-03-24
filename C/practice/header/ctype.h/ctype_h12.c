#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character is punctuation mark using ispunct

int main() {

    char input[50];
    int punchCount = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    for(int i = 0; input[i] != '\0'; i++){
        if(ispunct(input[i])){
            punchCount++;
        }
    }

    printf("punctuation count = %d", punchCount);

    return 0;
}