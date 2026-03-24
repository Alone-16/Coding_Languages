#include <stdio.h>
#include <string.h>

int main () {

    //finding a character in a string its index and remaing string after it using strchr
    //last occurrence

    char str[30];
    char ch;

    printf("Enter a word: ");
    scanf("%s", str);

    printf("Enter word to find: ");
    scanf(" %c", &ch);

    char *ptr = strrchr(str, ch);

    if(ptr != NULL){
        printf("Last occurrence of '%c' found at index %ld\n", ch, ptr - str);
        printf("the remaining word are %s", ptr);
    }
    else {
        printf("Character not found.");
    }

    return 0;
}