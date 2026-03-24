#include <stdio.h>

int main(){

    // Basic for array

    int num[5];

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    printf("You entered: ");
    for(int i = 0; i < 5; i ++){
        printf("%d ", num[i]);
    }

    return 0;
}