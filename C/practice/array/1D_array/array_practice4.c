#include <stdio.h>

int main() {

    //finding sum and avg

    int num[5];
    int sum = 0;

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
        sum += num[i];
    }

    float avg = (float)sum / 5;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}