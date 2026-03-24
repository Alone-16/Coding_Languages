#include<stdio.h>

int main(){

    //reversing the number

    int num;
    int reverse = 0;
    int digit;

    printf("Enter a number = ");
    scanf("%d", &num);

    while(num > 0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    printf("The reverse is = %d", reverse);

    return 0;
}