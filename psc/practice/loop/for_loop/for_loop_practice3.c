#include <stdio.h>
#include <string.h>
#include <ctype.h>

//no of tickets 

int main() {

    char input[50];

    printf("Enter the ticket log: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    int num = 0;
    int sum = 0;

    for(int i = 0; input[i] != '\0'; i++){
        if(isdigit(input[i])){
            num = num * 10 + (input[i] - '0');
        }
        else{
            sum += num;
            num = 0;
        }
    }

    sum += num; //addinng the last num if any.

    printf("The total number of tickets are = %d", sum);

    return 0;
}
