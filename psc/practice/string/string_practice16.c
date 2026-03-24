#include <stdio.h>
#include <string.h>

int main () {

    //finding a character in a string its index and remaing string after it using strchr
    //first occurrence

    char str[30];
    char ch;

    printf("Enter a word: ");
    scanf("%s", str);

    printf("Enter word to find: ");
    scanf(" %c", &ch);

    char *ptr = strchr(str, ch);

    if(ptr != NULL){
        printf("First occurrence of '%c' found at index %ld\n", ch, ptr - str);
        printf("the remaining word are %s", ptr);
    }
    else {
        printf("Character not found.");
    }

    return 0;
}