#include <stdio.h>

//incrementing arr using funcion

//Funcion declaration
void incrementArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    //Printing arr
    printf("Printing arr before calling the function.\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int size = sizeof(arr)/sizeof((arr[0]));

    incrementArray(arr, size);

    printf("Printing arr after calling the function.\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

//Defining funcion
void incrementArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] + 1;
    }
} 