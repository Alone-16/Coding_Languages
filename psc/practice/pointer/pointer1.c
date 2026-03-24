#include <stdio.h>

//Understanding of pointer

int main(void) {
    int x = 10;
    int *p = &x;    // p points to x

    printf("x = %d\n", x);        // 10
    printf("p points to address %p\n", (void*)p);
    printf("*p = %d\n", *p);      // 10

    *p = 20;                      // modify x through pointer
    printf("x after *p = 20 -> x = %d\n", x); // 20

    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

int main(void){
    int arr[3] = {10,20,30};
    int *p = arr; // arr decays to &arr[0]

    printf("%d\n", *p);     // 10
    p++;
    printf("%d\n", *p);     // 20
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <stdio.h>

int main() {
    char s1[] = "Hello";
    char *s2 = "World";

    printf("%c %c\n", s1[1], *(s2+1)); // 'e' 'o'
    // s2[0] = 'w'; // may be undefined (string literal supposed read-only)
    s1[0] = 'h';  // allowed
    printf("%s %s\n", s1, s2);
    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

