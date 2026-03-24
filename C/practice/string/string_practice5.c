#include <stdio.h>

int main () {

    //counting vowels, consonant, digits

    char str[50];
    char v[10] = "aeiouAEIOU"; 
    int vowels = 0;
    int consonant = 0;
    int digit = 0;
    int spaces = 0;

    printf("Enter the sentence: ");
    scanf("%s", str);                // here only words work because after space the string stops so it will only work  with one work that can include digit

    for(int i = 0; str[i] != '\0'; i ++){
        if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')){
           if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowels++;
           }
           else{
            consonant++;
           }
        }
        else if('0' <= str[i] && str[i] <= '9'){
            digit++;
        }
        else if(str[i] == ' '){
            spaces++;
        }
    }

    printf("Vowels: %d\nConsonant: %d\nDigits: %d\nSpaces: %d", vowels, consonant, digit, spaces);

    return 0;
}