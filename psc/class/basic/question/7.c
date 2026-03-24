#include <stdio.h>

//inserting a number at a given index (to right)

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int index, d, start, end, temp;

    printf("Enter index: ");
    scanf("%d", &index);

    d = (index + 1) % n;   

    start = 0; end = d - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

    start = d; end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

    start = 0; end = n - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++; end--;
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}