#include <stdio.h>

int main(){
    
// finding vowels or consonant

    char input;
    char a;
    char e;
    char i;
    char o;
    char u;
    
    printf("Enter a character = ");
    scanf("%c", &input);

    if(input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u'){
        printf("It is a vowel.");
    }
    else{
        printf("It is a consonant.");
    }
    
    return 0;
}