#include <stdio.h>

int main(){

    for(int o = 1; o <= 10; o++){

        for(int i = 1; i <= 10; i++){
            int oi = o * i;
            printf("%4d ", oi);   // added 4 so it takes upto 4 space 
            // if(oi <= 9){
            //     printf(" ");
            // }
        }

        printf("\n");
    }

    return 0;
}