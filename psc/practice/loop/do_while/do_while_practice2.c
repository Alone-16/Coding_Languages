#include <stdio.h>

int main() {

    // secret word guessing

    char secret[] = "alone";
    char guess[20];
    int correct;
    int i;
    

    do
    {
        int secret_length = 0;
        int guess_length = 0;
        int correct_letters = 0;
        correct = 0;

        printf("Guess the secret word: ");
        scanf("%s", guess);

        printf("\n");

        while (secret[secret_length] != '\0'){
            secret_length++;
        }

        while (guess[guess_length] != '\0'){    
            guess_length++;
        }

        for(int i = 0; i < secret_length; i++){
            if(guess[i] == secret[i]){
                correct_letters++;
            }
        }

        if(secret_length == guess_length && correct_letters == secret_length){
            correct = 1;
        }
        else{       
            printf("Wrong! Try again.\n");
            if(correct_letters > 0){
                printf("You have %d letters in the correct position!\n\n", correct_letters);
            }
        }


    } while (correct != 1);

    printf("Congratulations! You guessed it!");  

    return 0;
}