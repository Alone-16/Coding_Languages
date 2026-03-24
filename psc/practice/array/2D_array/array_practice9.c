#include <stdio.h>

int main() {

    //adding matrix

    int matrix1[3][3];
    int matrix2[3][3];
    int sum[3][3];

    printf("Enter 3x3 matrix1:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter 3x3 matrix2:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d", &matrix2[i][j]);
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The sum is :\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%3d", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}