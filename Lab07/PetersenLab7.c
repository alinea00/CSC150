#include <stdio.h>

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will be used by a rental car company to 
 * determine how much to charge its customers. You should prompt
 * the user to enter the number of days the car was rented and 
 * how many miles it was driven. A passenger car is rented for 
 * $15.00 per day plus $.40 per mile. However, the rate per mile 
 * goes down to $.35 if the car was driven 200 miles or more. 
 * Sales tax is 6% and the program should output a subtotal, tax 
 * amount, and total.
 ***************************************************************/
int main()
{
    // Declare constants used in calculations
    const float dailyRate = 15.0;
    const float salesTaxRate = 0.06;
    
    // Declare and initialize variables
    float numDaysRented = 0.0;
    float numMilesDriven = 0.0;
    float ratePerMile = 0.4;
    float subtotal = 0.0;
    float salesTax = 0.0;
    float totalCost = 0.0;

    // Prompt user for number of days a car was rented
    printf("Enter the number of days the car was rented:\t");
    scanf("%f", &numDaysRented);

    // Prompt user for number of miles driven
    printf("Enter the number of miles the car was driven:\t");
    scanf("%f", &numMilesDriven);

    // Change rate per mile if 200 miles or more
    if (numMilesDriven >= 200)
    {
       ratePerMile = 0.35;
    }

    // Calculate subtotal, taxes, and total cost
    subtotal = numDaysRented * dailyRate + numMilesDriven * ratePerMile;
    salesTax = subtotal * salesTaxRate;
    totalCost = subtotal + salesTax;

    // Output subtotal, taxes, and total cost
    printf("\nSubtotal:\t\t\t\t\t$%.2f\n", subtotal);
    printf("Tax Amount:\t\t\t\t\t$%.2f\n", salesTax);
    printf("Total:\t\t\t\t\t\t$%.2f\n", totalCost);

    // return success code
    return 0;
}