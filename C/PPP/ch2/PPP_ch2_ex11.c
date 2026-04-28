#include <stdio.h>

int main()
{
/* User variables */
    
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int half_dollars;
    int dollars;

/* Indv. Coin Worth in Cents*/

    int worth_p = 1;
    int worth_n = 5;
    int worth_d = 10;
    int worth_q = 25;
    int worth_h = 50;

    printf("Hello. Please enter the following information: \n\n");

/* Input: Pennies */

    printf("How many pennies do you have?: ");
    scanf("%d", &pennies);
    printf("\n\n");

/* Input: Nickels */

    printf("How many nickels do you have?: ");
    scanf("%d", &nickels);
    printf("\n\n");

/* Input: Dimes */

    printf("How many dimes do you have?: ");
    scanf("%d", &dimes);
    printf("\n\n");

/* Input: Quarters */

    printf("How many quarters do you have?: ");
    scanf("%d", &quarters);
    printf("\n\n");

 /* Input: Half-Dollars */

    printf("How many half-dollars do you have?: ");
    scanf("%d", &half_dollars);
    printf("\n\n");

/* Input: Dollars */

    printf("How many dollar coins do you have?: ");
    scanf("%d", &dollars);
    printf("\n\n");


/* Calculates the monetary value of the user's coins in cents. */
    
    int val_p = pennies * worth_p;
    int val_n = nickels * worth_n;
    int val_d = dimes * worth_d;
    int val_q = quarters * worth_q;
    int val_h = half_dollars * worth_h;
    int val_dl = dollars * 100;

    int c_sum = val_p + val_n + val_d + val_q + val_h + val_dl;
    float dl_sum = c_sum / 100.0; 

/* Prints the number of each individual coin type the user has. */

    if (pennies > 1) {
         printf("You have %d pennies.\n\n", pennies);
    } else if (pennies == 1) {
        printf("You have one penny.\n\n");
    } else {
        printf("You have no pennies.\n\n");
    }

    if (nickels > 1) {
        printf("You have %d nickels.\n\n", nickels);
    } else if (nickels == 1) {
        printf("You have one nickel.\n\n");
    } else {
        printf("You have no nickels.\n\n");
    }

    if (dimes > 1) {
        printf("You have %d dimes.\n\n", dimes);
    } else if (dimes == 1) {
        printf("You have one dime.\n\n");
    } else {
        printf("You have no dimes.\n\n");
    }

    if (quarters > 1) {
        printf("You have %d quarters.\n\n", quarters);
    } else if (quarters == 1){
        printf("You have one quarter.\n\n");
    } else {
        printf("You have no quarters.\n\n");
    }
    
    if (half_dollars > 1) {
        printf("You have %d half-dollars.\n\n", half_dollars);
    } else if (half_dollars == 1) {
        printf("You have one half-dollar.\n\n");
    } else {
        printf("You have no half-dollars.\n\n");
    }

    if (dollars > 1) {
        printf("You have %d dollar coins.\n\n", dollars);
    } else if (dollars == 1) {
        printf("You have one dollar.\n\n");
    } else {
        printf("You have no dollar coins.\n\n");
    }

/* Prints the monetary value of the user's coins */

    if (c_sum > 1) {
        printf("The value of your coins in cents is: %d cents.\n\n", c_sum);
    } else if (c_sum == 1) {
        printf("You have one cent.\n\n");
    } else {
        printf("You have no coins.\n\n");
    }

    if (dl_sum > 1) { 
        printf("The value of your coins in dollars is: $%.2f.\n\n", dl_sum);
    } else if (dl_sum == 1) {
        printf("You have one dollar.\n\n");
    } else if (dl_sum < 1 && dl_sum > 0) {
        printf("You have less than one dollar. (%.2f)\n\n", dl_sum);
    } else {
       printf("You have no dollars.\n\n"); 
    }

  return 0;
}
