#include <stdio.h>
#include <string.h>

int main () {

    //deviding string into parts using strtok 

    char str[70];

    printf("Enter your sentence: ");
    scanf("%s", str);

    char *token = strtok(str, ",");
    while(token != NULL){
        printf("%s\n", token);
        token  = strtok(NULL, ",");
    }

    return 0;
}