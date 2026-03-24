#include <stdio.h>

int main () {

    //counting even or odd

    int num[5];
    int even = 0;
    int odd = 0;

    printf("Enter 5 number: ");
    for(int i = 0; i < 5; i ++){
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("Even number = %d\n", even);
    printf("Odd number = %d", odd);

    return 0;
}