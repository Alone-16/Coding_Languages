#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

//Finding sin tan and cos 

int main() {

    double degree, radian;

    printf("Enter the degree of the angle: ");
    scanf("%lf", &degree);

    radian = degree * (PI / 180);
    double sin1 = sin(radian);
    double cos1 = cos(radian);

    printf("sin = %lf\n", sin1);
    printf("cos = %lf\n", cos1);

    if(cos1 != 0){
        double tan1 = tan(radian);
        printf("tan = %lf", tan1);
    }
    else{
        printf("Tan is undefined for this angle.\n");
    }
    

    return 0;
}