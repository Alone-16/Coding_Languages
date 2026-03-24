#include <stdio.h>

int main () {

    //checking if strings are equal

    char str[10];
    char str2[10];
    int equal = 1;

    printf("Enter first word: ");
    scanf("%s", str);

    printf("Enter second word: ");
    scanf("%s", str2);

    for(int i = 0; str[i] != '\0' || str2[i] != '\0'; i++){
        if(str[i] != str2[i]){
            equal = 0;
            break;
        }
    }

    if(equal){
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }

    return 0;
}