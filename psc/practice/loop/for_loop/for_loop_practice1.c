#include<stdio.h>

int main(){

    // Multiplication Table

    int no;
    int i;

    printf("Enter a number = ");
    scanf("%d", &no);
    printf("\n");

    printf("\nMultiplication Table of %d\n", no);
    printf("--------------------------\n");

    for ( i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", no, i, no * i);
    }
    

    return 0;
}