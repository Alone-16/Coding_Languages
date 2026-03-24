#include <stdio.h>

//Understanding Pass by Value and Pass by Reference

//Fuction declaration and defining
void squareValue(int num){
    num = num * num;
}

void squareReference(int *num){
    *num = *num * *num;
}

int main() {
    int num = 5;
    printf("Initial Value: %d\n", num);

    squareValue(num);
    printf("After call from squareValue: %d\n", num);

    squareReference(&num);
    printf("After call from squareReference: %d\n", num);

    return 0;
}

