//Temperature

#include <stdio.h>

int main()
{
    int temp;
    
    printf("Enter the temperature = ");
    scanf("%d", &temp);
    
    if(temp < 0){
        printf("Its Freezing Weather.");
    }
    else if(temp >= 0 && temp < 10){
        printf("Its Very Cold.");
    }
    else if(temp >= 10 && temp < 20){
        printf("Its Cold Weather.");
    }
    else if(temp >= 20 && temp < 30){
        printf("Its Normal Weather.");
    }
    else if(temp >= 30 && temp < 40){
        printf("Its Hot.");
    }
    else{
        printf("Its Very Hot");
    }
    
    return 0;
}
