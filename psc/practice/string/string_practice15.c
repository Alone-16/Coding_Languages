#include <stdio.h>
#include <string.h>

int main () {

    //printing string into uppercase using strupr

    char src[20];

    printf("Enter a word: ");
    scanf("%s", src);

    strupr(src);

    printf("uppercase: %s", src);

    return 0;
}