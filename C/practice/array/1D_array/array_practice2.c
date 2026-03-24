#include <stdio.h>

int main () {

    //finding largest and smallest 

    int arry[5];    

    printf("Enter 5 numbers: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arry[i]);
    }

    int largest = arry[0];
    int smallest = arry[0];

    for(int i = 0; i < 5; i++){
        if(arry[i] > largest) largest = arry[i];
        if(arry[i] < smallest) smallest = arry[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}