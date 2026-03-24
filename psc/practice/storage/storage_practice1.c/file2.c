#include <stdio.h>

extern int ex; //tells compiler that this variable exists in another file

int main() {

    //Auto, Registry and external variables

    auto int a = 10;
    printf("Auto variable: %d\n", a);

    for(int i = 1; i < 5; i++){
        register int b = i;
        printf("Registry variable: %d\n", b);
    }

    printf("External variable: %d", ex);

    return 0;
}