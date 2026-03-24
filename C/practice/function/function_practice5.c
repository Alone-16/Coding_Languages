#include <stdio.h>

//Showing that arguments are passed as copies

//Function declaration
void swap(int a, int b);

int main() {

    int a = 6;
    int b = 9;

    printf("Before swapping the value of a is %d and b is %d\n\n", a, b);
    swap(a, b);

    printf("The original a is still %d and b is %d\n", a, b);

    return 0;
}

//defining function
void swap(int a, int b){
    //This swap only affect copies (call by values)

    int c;
    c = a;
    a = b;
    b = c;

    printf("after swapping a is %d and b is %d\n\n", a, b);
}