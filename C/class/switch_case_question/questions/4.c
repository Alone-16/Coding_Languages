//Grade System

#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade in capital: ");
    scanf("%c", &grade);

    switch (grade){

        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Good");
            break;

        case 'C':
            printf("Average");
            break;

        case 'D':
            printf("Poor");
            break;

        case 'F':
            printf("Fail");
            break;

        default:
            printf("Enter valid grade");
    }

    return 0;
}