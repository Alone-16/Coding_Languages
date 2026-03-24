#include <stdio.h>
#include <string.h>

int main () {

    //for joining two string upto a point using strncat

    char fname[40];
    char lname[10];
    int n = 3;

    printf("Enter your first name: ");
    scanf("%s", fname);

    printf("Enter your second name: ");
    scanf("%s", lname);

    strcat(fname, " ");            //for adding space
    strncat(fname, lname, n);

    printf("Result: %s", fname);

    return 0;
}