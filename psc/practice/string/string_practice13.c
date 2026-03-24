#include <stdio.h>
#include <string.h>

int main () {

    //reversing a string using strrev

    char src[20];

    printf("Enter a word: ");
    scanf("%s", src);

    strrev(src);

    printf("Reversed: %s", src);

    return 0;
}