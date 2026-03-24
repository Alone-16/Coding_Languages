#include <stdio.h>

//Arguments, no return

//Function declaration
void print_sum(int first_no, int second_no);

int main () {

    int first_no;
    int second_no;

    printf("Enter first number: ");
    scanf("%d", &first_no);

    printf("Enter second number: ");
    scanf("%d", &second_no);

    print_sum(first_no, second_no);  //calling the function

    return 0;
}

//defining the function
void print_sum(int first_no, int second_no) {
    printf("Sum = %d\n", first_no + second_no);
}