#include <stdio.h>
#include <ctype.h>
#include <string.h>

//checking vowels with pointer

int vowel(char p);

int main() {

    char input[50];
    
    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';


    int count = 0;

    for(char *p = input; *p != '\0'; p++){
        if(vowel(tolower(*p))){
            count++;
        }
    }

    printf("The number of vowel are: %d", count);

    return 0;
}

int vowel(char p){
    if(p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u'){
        return 1;
    }

    return 0;
}