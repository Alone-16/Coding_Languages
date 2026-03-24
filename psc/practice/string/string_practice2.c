#include <stdio.h>

int main () {

    //finding length without using strlen

    char str[20];
    int length = 0;

    printf("Enter a string = ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }

    printf("String length is %d", length);

    return 0;
}