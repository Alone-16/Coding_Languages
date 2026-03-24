#include<stdio.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);  // For emojies

    // Number Guessing with Hints

    int secret = 42;
    int guess;

    printf("Input your guess = ");
    scanf("%d", &guess);

    if(guess > secret){
        if(guess - secret <= 5){
            printf("High! Hot 🔥");
        }
        else if(guess - secret <= 10){
            printf("Too high! Warm 🔥");
        }
        else{
            printf("Too High! Cold ❄️");
        }
    }
    else if(guess < secret){
        if(secret - guess <= 5){
            printf("Low! Hot 🔥");
        }
        else if(secret - guess <= 10){
            printf("Too low! Warm 🔥");
        }
        else{
            printf("Too low! Cold ❄️");
        }
        
    }
    else{
        printf(" 🎉 Correct! You guessed it right!");
    }

    return 0;
}