#include <stdio.h>

//Finding the number with a target (sum of two numbers)

int main() {
    int n;
    int target;
    int found = 0;

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

    printf("\n");

    printf("Enter the target: ");
    scanf("%d", &target);

    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            printf("The numbers are %d and %d : their sum is %d\n",
                arr[left], arr[right], sum);
            found = 1;
            break;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    if (!found) {
        printf("No two numbers found with sum = %d\n", target);
    }


    return 0;
}