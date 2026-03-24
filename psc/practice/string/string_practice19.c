#include <stdio.h>
#include <string.h>

int main () {

    //coping a part of string using strncpy

    char src1[20];
    char src2[20];
    int n = 3;

    printf("Enter a word: ");
    scanf("%s", src1);

    strncpy(src2, src1, n);
    src2[3] = '\0';          //add null 

    printf("Part coppied: %s", src2);

    return 0;
}
