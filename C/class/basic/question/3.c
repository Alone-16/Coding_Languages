//Root

#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    
    printf("Enter the vlaue of a = ");
    scanf("%d", &a);
    
    printf("Enter the value of b = ");
    scanf("%d", &b);
    
    printf("Enter the value of c = ");
    scanf("%d", &c);
    
    int square = b * b;
    int f_a_c = 4 * a * c;
    int type = square - f_a_c;
    
    if(type > 0){
        printf("It has real and two distict root.");
    }
    else if(type < 0){
        printf("It has imaginary root.");
    }
    else{
        printf("It has real and equal root.");
    }

    return 0;
}