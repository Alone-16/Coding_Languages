#include <stdio.h>

int main () {

    //reversing input number

    int arry[5];

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arry[i]);
    }

    printf("Reversed order: ");
    for(int i = 4; i >= 0; i--){
        printf("%d ", arry[i]);
    }

    return 0;
}