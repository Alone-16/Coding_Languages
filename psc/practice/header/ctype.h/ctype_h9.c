#include <stdio.h>
#include <string.h>
#include <ctype.h>

//checking if the character is a control character using iscntrl

int main() {

    char input[50];
    int cntrl = 0;

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    // input[strcspn(input, "\n")] = '\0';     //here if i havent removed the newline then iscntrl will be atleast 1

    for(int i = 0; input[i] != '\0'; i++){
        if(iscntrl(input[i])){
            cntrl++;
        }
    }

    printf("Control count: %d", cntrl);

    return 0;
}