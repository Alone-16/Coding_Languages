#include <stdio.h>

int main () {

    //check if a string is a Palindrome

    char str[20];
    int length = 0;
    int palindrome = 1;

    printf("Enter a string = ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }


    for(int i = 0; i < length / 2; i++){
        if(str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome) {
        printf("It is a palindrome");
    } else {
        printf("It isn't a palindrome");
    }
        
    return 0;
}
