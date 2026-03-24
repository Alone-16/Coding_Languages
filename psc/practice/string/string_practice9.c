#include <stdio.h>
#include <string.h>

int main () {

    //printing length using strlen

    char str[10];

    printf("Enter a word: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("\nLength = %d", len);

    return 0;
}
