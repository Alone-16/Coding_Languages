#include <stdio.h>

int main () {

    //changing uppercase to lowercase

    char str[10];
    char nstr[10];
    int i;

    printf("Enter a word: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            nstr[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            nstr[i] = str[i] + 32;
        }
        else{
            nstr[i] = str[i];
        }
    }
    nstr[i] = 0;

    printf("%s", nstr);

    return 0;
}