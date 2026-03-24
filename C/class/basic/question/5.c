//Coordinate Location

#include <stdio.h>

int main()
{
    int x;
    int y;
    
    printf("Enter the x coordinate: ");
    scanf("%d", &x);
    
    printf("Enter the y coordinate: ");
    scanf("%d", &y);
    
    printf("\n");
    
    if(x > 0 && y > 0){
        printf("The coordinate point(%d, %d) lies in the First quadrant", x, y);
    }
    else if(x > 0 && y < 0){
        printf("The coordinate point(%d, %d) lies in the Fourth quadrant", x, y);
    }
    else if(x < 0 && y < 0){
        printf("The coordinate point(%d, %d) lies in the Third quadrant", x, y);
    }
    else if(x > 0 && y < 0){
        printf("The coordinate point(%d, %d) lies in the Second quadrant", x, y);
    }
    else if(x == 0 && y > 0 || x == 0 && y < 0 || x < 0 && y == 0 || x > 0 && y == 0){
        printf("The coordinate point(%d, %d) lies on the axis.", x, y);
    }
    else{
        printf("The coordinate point(%d, %d) lies in the Origin", x, y);
    }
    
    return 0;
}