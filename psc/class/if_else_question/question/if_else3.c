#include <stdio.h>

    // finding if its a leap year

// int main(){
    
//     int year;
    
//     printf("input year = ");
//     scanf("%d", &year);
    
//     if(year%100 == 0){
//         if(year % 400 == 0){
//             printf("It is a leap year.");
//         }
//         else{
//             printf("It is not a leap year.");
//         }
//     }
//     else{
//         if(year%4 == 0){
//             printf("it is a leap year.");
//         }
//         else{
//             printf("It is not a leap year.");
//         }
//     }
    
//     return 0;
// }



// better than the above

#include <stdio.h>

int main() {
    int year;
    printf("Input year = ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        printf("It is a leap year.\n");
    } else {
        printf("It is not a leap year.\n");
    }

    return 0;
}

