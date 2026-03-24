#include <stdio.h>

int main() {
    int n;

    printf("Enter the amount of number to be listed: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the arr numbers : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - j - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    printf("Sorted : ");
    for(int l = 0; l < n; l++){printf("%d ", arr[l]);}

    return 0;
}