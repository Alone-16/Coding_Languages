#include<stdio.h>

int main(){

    // Electricity bill calculator

    /* Billing rules: 
    First 50 units → ₹0.50 per unit 
    Next 100 units → ₹0.75 per unit 
    Next 100 units → ₹1.20 per unit 
    Above 250 units → ₹1.50 per unit 
    Add 20% surcharge to the bil  */

    float unit;
    float Bill;
    float Final_Bill;

    printf("Please enter unit consumed = ");
    scanf("%f", &unit);

    if(unit <= 50){
        Bill = unit * 0.50;
    }
    else if(unit <= 150){
        Bill = (50 * 0.50) + ((unit - 50) * 0.75);
    }
    else if(unit <= 250){
        Bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);
    }
    else{
        Bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }

    Final_Bill = Bill + (Bill * 0.20);

    printf("Your bill is = $%f", Final_Bill);

    return 0;
}