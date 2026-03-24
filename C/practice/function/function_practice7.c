#include <stdio.h>

//Global variable
int count = 100;

// Function decalaration
void print_count();

int main() {

    int count = 10;

    if(1){
        int count = 1; //shadow both local and global count here
        printf("Block count: %d\n", count);
    }

    print_count();

    printf("Local count: %d\n", count);

    return 0;
}

//Defining function
void print_count(){
    printf("Global count from function: %d\n", count);
}