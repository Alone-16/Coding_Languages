#include <stdio.h>

//printing factorial using static and global

//Function declaration
int factorial(int n);

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);

    printf("Factorial = %d\n", result);

    extern int call_count;
    printf("factorial() was called %d times\n", call_count);

    return 0;
}

//Global variable to track call
int call_count = 0;

//Defining function
int factorial(int n){
    call_count++;
    
    if (n == 0 || n == 1){
        return 1;
    }
    else {
        //call_count++;    //count only when we actually multiply
        return n * factorial(n - 1);
    }
}