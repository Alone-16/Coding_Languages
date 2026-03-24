#include <stdio.h>

//printing binary to decimal

int main() {

    long binary;

    printf("Enter a number: ");
    scanf("%d", &binary);

    int base = 1;
    int decimal = 0;

    while(binary > 0){
        int bit = binary & 1; //or binary % 10
        decimal += bit * base;
        base = base * 2;
        binary = binary / 10;
    }

    printf("Decimal No : %d", decimal);

    return 0;
}