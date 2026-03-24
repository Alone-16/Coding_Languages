#include <stdio.h>

int main() {

    int num, n;
    int reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int cp = num;

    do{
        n = cp % 10;
        reverse = reverse * 10 +n ;
        cp /= 10;
    }while(cp != 0);

    if(reverse == num){
        printf("It is a palindrome.");
    }
    else{
        printf("It is not a palindrome.");
    }

    return 0;
}