#include <stdio.h>
// #include <stdbool.h>

int main() {

    // Finding raminder and quotient

    int a = 20;
    int b = 2;
    int c;
    
    printf("The quotient is %d\n", c = a/b);
    printf("The remainder is %d\n\n\n", c = a%b);
    
    // Finding area of rectangle
    
    int length, breath;
    
    scanf("%d", &length);
    scanf("%d", &breath);
    
    int area = length*breath; 
    
    
    printf("The area of rectangle is %d\n\n\n", area);
    
    // Swapping two variable without using third variable
    
    int first = 6;
    int second = 9;
    
    printf("before swapping first is %d\n", first);
    printf("before swapping second is %d\n\n", second);
    
    first = first+second;
    second = first-second;
    first = first-second;
    
    printf("after swapping first become %d\n", first);
    printf("after swapping second become %d\n\n\n", second);
    
    // Finding the number is even or odd
    
    int num;
    
    scanf("%d", &num);
    
    printf("If true the number is even = %s", num%2==0? "true" : "false");
    
    return 0;

}