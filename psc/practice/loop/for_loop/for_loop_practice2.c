#include<stdio.h>

int main(){

    // fun gambling game 

    int input;
    int coin = 100;
    int current_round = 1;
    int win = 0;
    int lose = 0;
    int jackpot_count = 0;
    int double_count = 0;
    int fifty = 0;
    int danger = 13;
    int db = 7;
    int i;
    int max_round = 10;

    printf("Game start\n");
    
    for( i = 0; coin != 0 && current_round <= max_round; i++)
    {
        printf("You have %d coins.\n", coin);
        printf("Round %d:  Enter a number: ", current_round);
        scanf("%d", &input);

        current_round++;

        if(input == danger){
            coin = coin / 2;
            jackpot_count++;
        }
        else if(input % 5 == 0){
            coin += 50;
            fifty++;
        }
        else if(input == db){
            if(coin % 2 == 0){
                printf("Coin are even -> Double! \n");
                coin = coin * 2;
                double_count++;
            }
            else{
                printf("Coin are odd -> Lost it all!\n");
                coin = 0;
                break;
            }
        }
        else{
            // printf("Enter a number = ");
            // scanf("%d", &input);

            if(input %2 == 0){
                coin += 20;
                printf("You Won! Coins: %d\n", coin);
                win++;
            }
            else{
                coin -= 15;
                if (coin < 0){
                    coin = 0;
                    lose++;
                    break;
                }
                else{
                    printf("You lost! Coins: %d\n", coin);
                    lose++;
                }
                

            }
        }
        
    }

    
    printf("\nYou have %d coin.\n\nGame over.\n", coin);
    if(current_round == 11){
        printf("Round limit reached.\n\n");
    }

    printf("Wins: %d\n", win);
    printf("Losses: %d\n", lose);
    printf("Jackpots hit: %d\n", jackpot_count);
    printf("Doubles hit: %d \n", double_count);
    printf("+50 hit %d", fifty);

    return 0;
}