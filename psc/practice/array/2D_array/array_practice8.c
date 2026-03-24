#include <stdio.h>

int main () {

    //Transpose of matrix

    int matrix[3][3];
    int transpose[3][3];

    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose:\n");
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}