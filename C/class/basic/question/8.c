#include <stdio.h>

//Linear search

int main() {
    int arr[5];
    int index = 0;
    int search;
    int found = 0;
    int size;

    printf("Enter the amount of number: ");
    scanf("%d", &size);

    printf("Enter %d number: ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for(int j = 0; j < size; j++){
        if(search == arr[j]){
            index = j;
            found = 1;
            break;
        }
    }

    if(found){
        printf("Element found at index = %d", index);
    }
    else{
        printf("Element doesn't exist.");
    }

    return 0;
}