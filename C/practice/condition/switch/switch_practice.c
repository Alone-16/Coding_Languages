#include<stdio.h>

int main(){

    //Ticket price calculator

    int type;
    int price;
    int quantity;
    float final_price;
    float gst = 0.18;
    int normal = 200;
    int threeD = 350;
    int IMAX = 500;

    printf("1 - Normal \n2 - 3D \n3 - IMAX \n\nEnter movie type (1-3) : ");
    scanf("%d", &type);

    printf("Enter no of tickets : ");
    scanf("%d", &quantity);

    switch (type)
    {
    case 1:
        price = normal * quantity;

        break;
    
    case 2:
        price = threeD * quantity;

        break;

    case 3:
        price = IMAX * quantity;

        break;

    default:
        printf("Enter valid type");
        return 0; // Exit pragram early
    }

    final_price = price + (price * gst);

        printf("\nThe price = %d\n", price);
        printf("Gst       = 18%%\n");
        printf("Total     = %.2f\n", final_price);


    return 0;
}