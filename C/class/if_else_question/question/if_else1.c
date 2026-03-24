#include <stdio.h>

int main() {

    int a = 0;

    // finding positive, negative or zero

    if(a > 0){
        printf("Positive\n");
    }
    else if(a == 0){
        printf("Zero\n");
    }
    else{
        printf("Negative\n");
    }

    // finding even or odd

    if(a % 2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    };

    // finding grade

    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 40){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }

    // finding largest among three numbers

    int num1, num2, num3;

    printf("enter value of a, b, c = ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("Num1 is the largest\n");
    }
    else if(num2 > num1 && num2 > num3){
        printf("Num2 is the largest\n");
    }
    else{
        printf("Num3 is the largest\n");
    }

    return 0;
}