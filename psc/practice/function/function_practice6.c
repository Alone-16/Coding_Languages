#include <stdio.h>

//Learing global, local, block variables

//Global variable
int globalVar = 50;
void print_global();

int main() {

    int localVar = 10;
    
    if(1){
        int blockVar = 20;
        printf("blockVar: %d\n", blockVar);
    }

    printf("localVar: %d\n", localVar);

    print_global();

    return 0;
}

//Fuction to print global variable
void print_global(){
    printf("globalVar: %d\n", globalVar);
}