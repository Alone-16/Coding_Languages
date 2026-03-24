// Write a program to create a pointer using malloc function for an array of 5 elements

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(5 * sizeof(int));
    
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
}