# include <stdio.h>

int main(){
    int n = 100; //temp

    // Snippet 1:
    for(int i = 0; i < n; i * 2){
    }
    // time complexity: log(n)


    // 2.
    while(n > 1){
    n = n/10;
    }
    // time complexity: log(n)


    // 3.
    for(int i = 0; i < n; i++){
    }
    for( int j = 0; j < n; j++){
    }
    // time complexity: O(n)


    // 4. 
    int i = 0;
    while(i < n){
        int j = 0;
        while(j < n){
            j++;
        }
        i++;
    }
    // time complexity: O(n^2)


    // 5.
    for(int i = 0; i < n; i++){
        if(i == 5){
            break;
        }
    }
    // time complexity: O(6) -> O(1)


    // 6.
    for(int i = 0; i < n; i + i){  // 1, 2, 4, 8, 16, 32, 64...
        printf("%d", i);
    }
    // time complexity: log(n)

    
    // 7.
    for(int i = 1; i < n; i++){   // O(n)
        for(int j = 1; j <= i; j++){       // 1, 1 2, 1 2 3, 1 2 3 4, ...n
            printf("*");
        }
    }
    // time complexity: n(n + 1)/2 -> (n^2 + 1)/2 -> O(n^2)


    // 8.
    for(int i = 0; i < n; i++){
        if(i < 5){
            for(int j = 0; j < n; j++){
                printf("%d", i);
            }
        }
    }
    // time complexity: O(n)


    // 9.
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n*n; j++){
            printf("%d", j);
        }
        printf("%d", i);
    }
    // time complexity: O(n^3) Cubic illusion

    // -----------------------------------------------------------------------------------------------------------------------------------------------------------

    // Linear Searching without flag
    int n, target;
    scanf("%d", &n); // n = 10
    scanf("%d", &target); // target = 25
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);     // e.g: arr = [10, 20, 15, 30, 25, 50, 70, 65, 80, 90]
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            print("%d", i); // or printf("Target Found");
        }
    }
    
    // Linear Seraching with flag
    int n, target, isFound = 0;
    // if index then int index;
    scanf("%d", &n); // n = 10
    scanf("%d", &target); // target = 25
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);     // e.g: arr = [10, 20, 15, 30, 25, 50, 70, 65, 80, 90]
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            isFound = 1;
            // index = i
            break;
        }
    }

    if(isFound){
        printf("Target Found");
        // printf("Index: %d", i);
    }
    else{
        printf("Target not found");
    }


    // Binary Searching
    int low, mid, high;
    low = 0;
    high = n;
    mid = (low + high) / 2;
    int Found = 1;
    int arr = {10, 20, 20, 30, 40, 50, 60, 70};

    while(!Found);    
        if(arr[mid] == target){
            printf("element found");
            Found = 0;
        }
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    
    return 0;
}