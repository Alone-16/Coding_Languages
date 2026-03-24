#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }

        for(int k = 1; k <= 10 - i - i; k++){
            if(k == 3 && i == 1 || k == 6 && i == 1 ){
                printf("* ");
            }
            else if(i == 2 && k == 3 || i == 2 && k == 4){
                printf("* ");
            }
            else if(i == 3 && k == 2 || i == 3 && k == 3){
                printf("* ");
            }
            else if(i == 4 && k == 1 || i == 4 && k == 2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }

        for(int l = 1; l <= i; l++){
            printf("* ");
        }
       
        printf("\n");
    }

    for(int i = 5; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }

        for(int k = 1; k <= 10 - i - i; k++){
            printf("  ");
        }

        for(int l = 1; l <= i; l++){
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
