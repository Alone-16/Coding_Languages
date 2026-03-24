#include<stdio.h>

int main(){

    // repeat asking the user for a positive number until negative input

    int num;
    int sum = 0;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num > 0){sum += num;}
    } while (num >= 0);
    
    printf("Total sum = %d", sum);

    return 0;
}