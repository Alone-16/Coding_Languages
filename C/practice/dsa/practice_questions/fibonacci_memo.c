# include <stdio.h>

int dp[1000];

int fib(int n) {
    if (n <= 1){
        return n;
    }

    if (dp[n] != -1){
        return dp[n];
    }

    dp[n] = fib(n -1) + fib(n - 2);
    return dp[n];
}

int main() {

    for(int i = 0; i < 1000; i++){
        dp[i] = -1;
    }

    printf("%d", fib(6));

    return 0;
}