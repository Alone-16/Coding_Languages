#include <stdio.h>

int main() {
    int num, index;
    int arr[6] = {1, 2, 3, 4, 5};
    int length = 5;

    printf("Enter the number to insert: ");
    scanf("%d", &num);

    printf("Enter the index to insert at (0 to %d): ", length);
    scanf("%d", &index);

    if (index >= 0 && index <= length) {
        for (int i = length; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = num;
        length++;

        printf("Updated array: ");
        for (int i = 0; i < length; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Invalid index. Enter a value between 0 and %d.\n", length);
    }

    return 0;
}

