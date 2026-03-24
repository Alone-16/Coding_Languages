#include <stdio.h>

int main () {

    //reverse printing string character by character

    char str[20];
    int length = 0;

    printf("Enter a string = ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }

    printf("Reverse string is ");
    for(int i = length - 1; i >= 0; i--){
        printf("%c ", str[i]);
    }

    return 0;
}