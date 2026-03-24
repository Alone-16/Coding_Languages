#include<stdio.h>
#include<string.h>

    // Checking if the triangle is valid using angle and sides

int main() {

    int a, b, c;
    char type[10];

    printf("Enter triangle value (angle or side): ");
    scanf("%s", type);

    if(strcmp(type, "angle") == 0){
        printf("Enter the first angle = ");
        scanf("%d", &a);

        printf("Enter the second angle = ");
        scanf("%d", &b);

        printf("Enter the third angle = ");
        scanf("%d", &c);

        if(a + b + c == 180 && a > 0 && b > 0 && c > 0){
            if(a == b && b == c){
                printf("Its an equilateral triangle");
            }
            else if(a == b || b == c || c == a ){
                printf("Its an isosceles triangle");
            }
            else if(a != b && b != c && c != a){
                printf("Its an scalene triangle");
            }
        }
        else{
            printf("Its not a valid triangle");
        }
        
    }
    else{
        printf("Enter the first side = ");
        scanf("%d", &a);

        printf("Enter the second side = ");
        scanf("%d", &b);

        printf("Enter the third side = ");
        scanf("%d", &c);

        if(a + b > c && b + c > a && c + a > b){
            if(a == b && b == c ){
                printf("Its an equilateral triangle");
            }
            else if(a == b || b == c || c == a){
                printf("Its an isosceles triangle");
            }
            else if(a != b && b != c && c != a){
                printf("its an scalene triangle");
            }    
        }
        else{
            printf("Its not a valid triangle");
        }

    }

    return 0;
}