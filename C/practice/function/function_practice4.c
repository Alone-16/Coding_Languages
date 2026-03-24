#include <stdio.h>

// Arguments, return

//Function declaration
int multiply(int x, int y);
int get_number();

int main() {

    int x = get_number();
    int y = get_number();

    int result = multiply(x, y);

    printf("Result: %d", result);

    return 0;
}

//defining function
int get_number(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

//defining function
int multiply(int x, int y){
    int result = x * y;
    return result;
}