#include <stdio.h>

int main() {
    int n;
    printf("Enter a no: ");
    scanf("%d", &n);

    int x = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i + j == n + 1){
                if(i <= n /2 + 1){
                    printf("%d", i);
                    x = i;
                }
                else{
                    printf("%d", n - i + 1);
                }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}