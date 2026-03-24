#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    char cp[100];
    char strf[] = " -C Programming";
    char vowel[] = "aeiouAEIOU";
    int vowel_count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';
    printf("You entered: %s\n", str);

    //copying string using strcpy
    strcpy(cp, str);
    printf("Copied string: %s\n", cp);

    //concatenating strings using strcat
    strcat(str, strf);
    printf("Concatenated str: %s\n", str);

    //comparing two strings using strcmp
    int result = strcmp(str, cp);
    if(result == 0){
        printf("Strings are equal\n");
    }
    else if(result < 0){
        printf("'%s' comes before '%s'\n", str, cp);
    }
    else{
        printf("'%s' comes after '%s'\n", str, cp);
    }

    //reversing string using strrev
    strrev(str);
    printf("Reversed string: %s\n", str);

    //finding the length using strlen
    int size = strlen(cp);

    //reversing string using loop
    char revstr[100];
    for(int i = 0; i < size; i++){
        revstr[i] = cp[size - 1 - i];
    }
    revstr[size] = '\0';

    printf("Reversed string second time: %s\n", revstr);

    //counting vowels using loop
    for(int i = 0; cp[i] != '\0'; i++){
        for(int j = 0; vowel[j] != '\0'; j++){
            if(cp[i] == vowel[j]){
                vowel_count++;
            }
        }
    }
    printf("No of vowels = %d", vowel_count);

    return 0;
}