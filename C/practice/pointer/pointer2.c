#include <stdio.h>

//withdraw and deposit using pointer

// Function declarations
void deposit(int *balance, int amount);
int withdraw(int *balance, int amount);

int main(void) {
    int my_balance = 500;
    int *balance = &my_balance;  // optional

    printf("Initial balance: %d\n", my_balance);

    deposit(balance, 200);
    printf("After deposit of 200: %d\n", my_balance);

    if (withdraw(balance, 800)) {
        printf("Withdraw 800 succeeded. New balance: %d\n", my_balance);
    } else {
        printf("Withdraw 800 failed.\n");
    }


    if (withdraw(balance, 300)) {
        printf("Withdraw 300 succeeded. New balance: %d\n", my_balance);
    } else {
        printf("Withdraw 300 failed.\n");
    }

    printf("Final balance = %d\n", my_balance);

    return 0;
}

// Defines functions
void deposit(int *balance, int amount) {
    if (balance == NULL) return;        // safety check
    if (amount <= 0) return;            // ignore non-positive deposit
    *balance += amount;
}

int withdraw(int *balance, int amount) {
    if (balance == NULL) return 0;      // failure
    if (amount <= 0) return 0;          // invalid amount

    if (*balance < amount) {
        return 0;   // insufficient funds
    } else {
        *balance -= amount;
        return 1;   // success
    }
}
