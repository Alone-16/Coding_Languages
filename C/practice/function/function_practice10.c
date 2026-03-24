#include <stdio.h>

//Reversing arr using function

//Funcion declaration
void incrementArray(int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    //Printing arr
    printf("Printing arr before reversing it.\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int size = sizeof(arr)/sizeof((arr[0]));

    incrementArray(arr, size);

    printf("Printing arr after reversing it.\n");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}

//Defining funcion
void incrementArray(int arr[], int size){
    int temp;
    for(int i = 0; i < size/2; i++){
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
} 