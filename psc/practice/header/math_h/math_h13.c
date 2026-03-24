#include <stdio.h>
#include <math.h>

///Finding the hypotenus using hypot

int main() {

    double x1, x2, y1, y2;

    printf("Enter the first coordinate x and y: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the second coordinate x and y: ");
    scanf("%lf %lf", &x2, &y2);

    double dx = x2 - x1;
    double dy = y2 - y1;

    double h = hypot(dx, dy);

    printf("The distance between the coordinates are = %lf", h);

    return 0;
}