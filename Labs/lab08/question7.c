/*
Name:Muhammad Abbas
ID: 23k-0068
Description:You are developing a C program for a coffee shop that offers discounts based on
customer loyalty and purchase history. The program should work as follows:

The program should have a user-defined function named calculateDiscount that takes two
parameters: the customer's total purchase amount and the number of times they
have visited the shop in the past month.

determine the discount based on the following criteria:
If the customer has visited the shop more than 10 times in the past month and
their total purchase amount is $50 or more, they get a 15% discount.
If the customer has visited the shop more than 5 times in the past month and their
total purchase amount is $30 or more, they get a 10% discount.
For all other customers, no discount is applied.
The function should return the calculated discount amount.
Date: 24/10/23
*/

#include <stdio.h>

// Function to calculate the discount based on customer loyalty and purchase amount
double calculateDiscount(double totalPurchaseAmount, int visits) {
    double discount = 0.0;
    
    //checking conditions for discount application
    if (visits > 10 && totalPurchaseAmount >= 50.0) {
        discount = 0.15 * totalPurchaseAmount; // 15% discount
    } else if (visits > 5 && totalPurchaseAmount >= 30.0) {
        discount = 0.10 * totalPurchaseAmount; // 10% discount
    }

    return discount;
}

int main() {
    double totalPurchaseAmount;
    int visits;

    // Prompt the user to input total purchase amount and number of visits
    printf("Enter the total purchase amount: $");
    scanf("%lf", &totalPurchaseAmount);

    printf("Enter the number of visits in the past month: ");
    scanf("%d", &visits);

    if (visits < 0) {
        printf("Invalid number of visits. Please enter a non-negative value.\n");
    } else {
        
        double discount = calculateDiscount(totalPurchaseAmount, visits);

        if (discount > 0.0) {
            printf("You qualify for a discount of $%.2lf\n", discount);
        } else {
            printf("No discount applied.\n");
        }
    }

    return 0;
}
