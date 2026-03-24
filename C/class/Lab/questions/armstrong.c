#include <Stdio.h>

int main() {

    int num;
    int arm_value = 0;
    int length = 0;

    printf("Enter a value: ");
    scanf("%d", &num);

    int cp1 = num;
    int cp2 = num;

    do{
        int n = cp1 % 10;
        length++;
        cp1 /= 10;
    }while(cp1 != 0);

    printf("length = %d\n", length);

    do{
        int n = cp2 % 10;
        int arms = 1;
        
        for(int i = 1; i <= length; i++){
            arms = arms * n;
        }

        cp2 /= 10;
        arm_value += arms;

    }while(cp2 != 0);

    printf("arm_value = %d\n", arm_value);

    if(arm_value == num){
        printf("It is a armstrong number");
    }
    else{
        printf("It is not a armstrong number");
    }

    return 0;
}