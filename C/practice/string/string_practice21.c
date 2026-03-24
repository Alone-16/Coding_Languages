#include <stdio.h>
#include <string.h>

int main () {

    //comparing two strings upto n no of character using strncmp

    char a[20];
    char b[20];
    int n = 5;

    printf("Enter the first word: ");
    scanf("%s", a);

    printf("Enter the second word: ");
    scanf("%s", b);

    int result = strncmp(a, b, n);

    if(result == 0){
        printf("The first 5 characters are equal\n");
    }
    else if(result < 0){
        printf("First 5 characters of '%s' comes before '%s'\n", a, b);
    }
    else{
        printf("First 5 characters of '%s' comes after '%s'\n", a, b);
    }

    return 0;
}