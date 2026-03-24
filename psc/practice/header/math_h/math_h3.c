#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, digit, count = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // keep original safe
    temp = num;

    // counting digits
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    temp = num; // temp again to original value

    // finding the sum of digits and its power
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is NOT an Armstrong number\n", original);
    }

    return 0;
}
