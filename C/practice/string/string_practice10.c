#include <stdio.h>
#include <string.h>

int main () {

    //copying a string using strcpy

    char src[20];
    char dest[20];

    printf("Enter a word: ");
    scanf("%s", src);

    strcpy(dest, src);

    printf("Copied: %s", dest);

    return 0;
}