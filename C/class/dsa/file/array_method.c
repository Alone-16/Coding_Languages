# include <stdio.h>
// reversing arr
void reverse_arr(int arr[], int start, int end){
    while(end > start){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}


/* Write a c program to rotate a array left of right by k positions using an effecient method such as reversal algo*/
// left rotation by n 
void left_rotation(int arr[], int length, int shift){
    shift = shift % length;
    reverse_arr(arr, 0, shift - 1);
    reverse_arr(arr, shift, length - 1);
    reverse_arr(arr, 0, length - 1);
}


// right rotation by n
void right_rotation(int arr[], int length, int shift){
    shift = shift % length;
    reverse_arr(arr, 0, length - 1);
    reverse_arr(arr, 0, shift - 1);
    reverse_arr(arr, shift, length - 1);
    
    // or we can also do 
    
    // left_rotation(arr, length, length - shift);
}


void print_arr(int arr[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = 5;

    right_rotation(arr, length, 2);
    print_arr(arr, length);

    left_rotation(arr, length, 4);
    print_arr(arr, length);
}