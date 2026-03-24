# include <stdio.h>


// bubble sort
void bubble_sort (int *arr, int length){
    for(int i = 0; i < length - 1; i++){
        int swapped = 0;
        for (int j = 0; j < length - 1 - i; j++) {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped){
            break;
        }
    }
}

// Selection Sort
void selection_sort (int *arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        int min_index = i;
        
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        
        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
}


// Insertion Sort
void insertion_sort (int arr[], int length) {
    int i, j, key;
    
    for (i = 1; i < length; i++){
        key = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        
        arr[j + 1] = key;
    }
}


// swap
void swap (int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


// partition    
int partition (int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1, j = high;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }

        while (j >= low && arr[j] > pivot) {
            j--;
        }

        if (i < j) {
            swap(arr, i, j);
        }
        else {
            break;
        }
    }
    
    swap(arr, low, j);
    return j;
}


//Quick Sort
void quick_sort (int arr[], int low, int high){
    if (low < high) {
        int p = partition (arr, low, high);
        quick_sort(arr, low, p - 1);
        quick_sort(arr, p + 1, high);
    }
}


// Merge Sort


int main () {
    int arr[] = {50, 30, 10, 90, 80, 20, 40, 70};
    int length = sizeof(arr) / sizeof(arr[0]);

    // bubble_sort(arr, length);
    // selection_sort(arr, length);
    // insertion_sort(arr, length);
    quick_sort(arr, 0, length - 1);

    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}