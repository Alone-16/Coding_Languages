#include <stdio.h>

int main () {

    //reversing a string word

    char str1[10];
    char str2[10];
    int length = 0;

    printf("Enter a word: ");
    scanf("%s", str1);

    for(int i = 0; str1[i] != '\0'; i++){
        length++;
    }

    for(int i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[length - 1 - i]; 
    }

    str2[length] = '\0';

    printf("Reversed = %s", str2);

    return 0;
}