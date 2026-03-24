#include <stdio.h>

//No arguments, return

//Function declaration
int get_number();

int main() {

    int a = get_number();
    int b = get_number();

    printf("Sum = %d", a + b);

    return 0;
}

//Defining function
int get_number() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}