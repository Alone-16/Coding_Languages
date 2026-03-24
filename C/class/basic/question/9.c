#include <stdio.h>

//putting the zero in last

int main() {
    int n;

    printf("Enter the amount of number to listed: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the numbers: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int limit = n;
    int last = 1;

    for(int i = 0; i < limit; i++){
        if(arr[i] == 0){
            int temp = arr[n - last];
            arr[n - last++] = arr[i];
            arr[i] = temp;
            limit--;
        }
    }

    printf("Output: ");
    for(int j = 0; j < n; j++){
        printf("%d", arr[j]);
    }

    return 0;
}