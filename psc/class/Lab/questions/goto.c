//Write a program of calculator using goto statement.
#include<stdio.h>
int main(){
    int x,y;
    char operator;
    printf("Enter the value of x:" );
    scanf("%d",&x);

    printf("Enter the value of y:" );
    scanf("%d",&y);
     
    printf("Enter a operator:" );
    scanf(" %c",&operator);
    switch(operator){
        case '+':
        goto add ;
        case '-':
        goto sub ;
        case '*':
        goto multiply;
        case'/':
        goto divide;
    }
    add:
    printf("%d",x+y);
    goto end;
    sub:
    printf("%d",x-y);
    goto end;
    multiply:
    printf("%d",x*y);
    goto end;
    divide:
    printf("%d",x/y);
    goto end;


    end :
    return 0;
}




    


    
