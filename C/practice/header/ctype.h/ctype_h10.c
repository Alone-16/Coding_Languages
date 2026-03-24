#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character is printable using isprint

int main() {

    char input[50];
    int isprnt = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    for(int i = 0; input[i] != '\0'; i++){
        if(isprint(input[i])){
            isprnt++;
        }
    }

    printf("Printable count = %d", isprnt);

    return 0;
}