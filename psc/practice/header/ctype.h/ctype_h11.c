#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character has graphical representation using isgraph

int main() {

    char input[50];
    int isgrph = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    for(int i = 0; input[i] != '\0'; i++){
        if(isgraph(input[i])){
            isgrph++;
        }
    }

    printf("graphic representation count = %d", isgrph);

    return 0;
}