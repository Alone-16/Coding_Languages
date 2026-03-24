#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    printf("Enter the amount of number to be listed: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        int minIndex = i;
        
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        
        
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    

    printf("Sorted arr : ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}