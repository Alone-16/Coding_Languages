#include <stdio.h>
#include <string.h>

int main () {

    //finding a substring inside a string using strstr
    //first occurrence

    char str[50];
    char word[20];

    printf("Enter a word: ");
    scanf("%s", str);

    printf("Enter word to find: ");
    scanf("%s", word);

    char *ptr = strstr(str, word);

    if(ptr != NULL){
        printf("Substring found at index %ld\n", ptr - str);
        printf("the remaining string: %s", ptr);
    }
    else {
        printf("Substring not found.");
    }

    return 0;
}