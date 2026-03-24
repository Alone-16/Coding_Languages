#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

// Finding asin, acos, atan

int main() {
    double x;
    double rad1, rad2, rad3, deg1, deg2, deg3;

    printf("Enter a value between -1 to 1: ");
    scanf("%lf", &x);

    if (x >= -1 && x <= 1) {
        rad1 = asin(x);
        rad2 = acos(x);

        deg1 = rad1 * (180.0 / PI);
        deg2 = rad2 * (180.0 / PI);

        printf("asin(%.6f) = %.6f radians, %.4f degrees\n", x, rad1, deg1);
        printf("acos(%.6f) = %.6f radians, %.4f degrees\n", x, rad2, deg2);
    } 
    else {
        printf("Error: input out of domain for asin and acos.\n");
    }

    // atan is always valid
    rad3 = atan(x);
    deg3 = rad3 * (180.0 / PI);
    printf("atan(%.6f) = %.6f radians, %.4f degrees\n", x, rad3, deg3);

    return 0;
}
