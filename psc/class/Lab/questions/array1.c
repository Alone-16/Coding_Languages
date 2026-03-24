#include <stdio.h>

int main() {
    int arr[6] = {5, 120, 1, 6, 255, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    for(int k = 0; k < n; k++) printf("%d ", arr[k]);

    return 0;
}