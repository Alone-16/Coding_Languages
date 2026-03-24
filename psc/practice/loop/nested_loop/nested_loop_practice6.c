#include <stdio.h>

int main () {

    // handling seat

    for(char row = 'A'; row <= 'E'; row ++){

            for(int i = 1; i <= 10; i ++){
                printf("%c%d ", row, i);
            }

        printf("\n");
    }

    return 0;
}