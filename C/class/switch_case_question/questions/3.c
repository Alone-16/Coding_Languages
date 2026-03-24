//Vowel or Consonant

#include <stdio.h>

int main() {
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    switch (input){
        case 'a':
        
        case 'e':

        case 'i':

        case 'o':

        case 'u':
            printf("Vowel");
            break;

        default:
            if(input > 'a' && input <= 'z'){
                printf("Consonant");
            }
            else{
                printf("Enter a valid character");
            }
    }
}