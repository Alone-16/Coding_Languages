#include <stdio.h>
#include <string.h>

int main () {

    //printing string into lowercase using strlwr

    char src[20];

    printf("Enter a word: ");
    scanf("%s", src);

    strlwr(src);

    printf("lowercase: %s", src);

    return 0;
}