#include <stdio.h>
#include <string.h>

int main () {

    //comparing two strings using  strcmp

    char a[10];
    char b[10];

    printf("Enter the first word: ");
    scanf("%s", a);

    printf("Enter the second word: ");
    scanf("%s", b);

    int result = strcmp(a, b);

    if(result == 0){
        printf("Strings are equal\n");
    }
    else if(result < 0){
        printf("'%s' comes before '%s'\n", a, b);
    }
    else{
        printf("'%s' comes after '%s'\n", a, b);
    }

    return 0;
}