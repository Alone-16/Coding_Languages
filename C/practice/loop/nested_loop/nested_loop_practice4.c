#include <stdio.h>

int main () {

    //cross inside a box

    int size = 5;

    for(int i = 1; i <= size; i ++){
        for (int j = 1; j <= size; j++){

            if(i == 1 || i == size || j == 1 || j == size || i == j || i + j == size + 1){
                printf("* ");
            }
            else{
                printf("  ");
            }

        }

        printf("\n");
    }

    


    //dot inside a box

    int mid = (size + 1) / 2;

    printf("\n");

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size || (i == mid && j == mid))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}