// #include <stdio.h>

// //printing decimal to binary

// int main() {

//     int input;
//     int rem[20];

//     printf("Enter a number: ");
//     scanf("%d", &input);

//     int cpy = input;
//     int length = 0;
//     int i = 0;

//     while(cpy > 0){
//         rem[i] = cpy % 2;
//         cpy = cpy / 2;
//         i++;
//         length++;
//     }

//     for(int i = length - 1; i >= 0; i--){
//         printf("%d", rem[i]);
//     }

//     return 0;
// }

#include <stdio.h>

//printing decimal to binary

int main() {
    long decimal;

    printf("Enter a number: ");
    scanf("%d", &decimal);

    int rem = 1;
    int binary = 0;

    while(decimal > 0){
        int num = decimal % 2;
        binary = binary  + rem * num;
        rem *= 10;
        decimal = decimal / 2;
    }

    printf("Binary No : %d", binary);

    return 0;
}