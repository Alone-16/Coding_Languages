#include <stdio.h>

int main () {

    //string basic

    char str[20];

    printf("Enter a string = ");
    scanf("%s", str);

    printf("Characters: ");
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c ", str[i]);   // use c not for printing a char from string
    }

    return 0;
}