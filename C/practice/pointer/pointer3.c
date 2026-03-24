#include <stdio.h>

//loop using pointer

int main() {

    int arr[5];

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    printf("The five number in rev: ");
    for(int *p = arr + 4; p >= arr; p--){
        printf("%d ", *p);
    }

    //Sum
    int sum = 0;
    for(int *p = arr; p < arr + 5; p++){
        sum += *p;
    }

    printf("\nThe sum of numbers = %d", sum);

    return 0;
}