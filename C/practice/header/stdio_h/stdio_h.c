#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // remove newline if present
    str[strcspn(str, "\n")] = '\0';

    printf("You entered: %s\n", str);

    return 0;
}
