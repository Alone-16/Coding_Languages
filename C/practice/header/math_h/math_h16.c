#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

//Finding degee of tan using coordinate with the help of atan2

int main() {

    double x1, x2, y1, y2;
    double rad1, rad2, deg1, deg2, diff;

    printf("Enter the first coordinate (x1, y1): ");
    scanf("%lf%lf", &x1, &y1);

    printf("Enter the second coordinate(x2, y2): ");
    scanf("%lf%lf", &x2, &y2);

    rad1 = atan2(y1, x1);
    rad2 = atan2(y2, x2);

    deg1 = rad1 * (180.0 / PI);
    deg2 = rad2 * (180.0 / PI);

    diff = deg2 - deg1;

    printf("Angle of first point = %.2lf degrees\n", deg1);
    printf("Angle of second point = %.2lf degrees\n", deg2);
    printf("Angle difference = %.2lf degrees", diff);

    return 0;
}