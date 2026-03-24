#include <stdio.h>

int main () {

    //Better pyramid

    int size = 5;

    for(int i = 1; i <= 5; i ++){

        for(int o = 1; o <= size - i; o ++){
            printf(" ");
        }

        for(int j = 1; j <= i; j ++){
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}