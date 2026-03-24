# include <stdio.h>

/* Given an array in a number called k, write a program to find the maximum sum of any contiguous subarray of size k using the sliding window technique */
int max_subarray_sum(int arr[], int length, int k){
    int max_sum;
    int window_sum = 0;

    for(int i = 0; i < k; i++){
        window_sum += arr[i];
    }

    max_sum = window_sum;

    for(int i = k; i < length; i++){
        window_sum = window_sum + arr[i] - arr[i - k];
        if(window_sum > max_sum){
            max_sum = window_sum;
        }
    }

    return max_sum;
}


int main() {
    int arr[] = {2, 1, 5, 1 ,3, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    printf("Original Array: ");
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int subarray_max_sum = max_subarray_sum(arr, length, k);
    printf("Max subarray sum: %d", subarray_max_sum);
}


// TwoSum
/* Given an array of integers and a target value, find two different elements in the array whose sum is equal to the given target.  */

