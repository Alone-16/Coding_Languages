#include <stdio.h>
#include <string.h>

int main () {

    //for joining two string using strcat

    char src1[40];
    char src2[10];

    printf("Enter the first word: ");
    scanf("%s", src1);

    printf("Enter the second word: ");
    scanf("%s", src2);

    strcat(src1, " ");            //for adding space
    strcat(src1, src2);

    printf("After concatenation: %s", src1);

    return 0;
}