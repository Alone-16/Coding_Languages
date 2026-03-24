# include <stdio.h>

// Selection Sort
int selection_sort(int *arr, int length, int target) {
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
  
  for (int i = 0; i < length; i++){
    if (arr[i] == target){
      return i;
    }
  }
}


int main(){
  int n;
  scanf("%d", &n);
  
  int arr[n];
  for(int i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }
  
  int target;
  scanf("%d", &target);

  printf("%d", selection_sort(arr, n, target));

  return 0;
}