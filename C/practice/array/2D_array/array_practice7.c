#include <stdio.h>

int main () {

    //sum of matrix

    int matrix[3][3];
    int sum = 0;

    printf("Enter 3x3 matrix:\n");
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("Sum = %d", sum);

    return 0;
}