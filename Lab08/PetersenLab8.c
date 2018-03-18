#include <stdio.h>

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will be used by a business that boards dogs. 
 * It charges clients a daily rate that is based on both the 
 * weight of the dog and the number of days per month in a 
 * client's contract. The business also offers the option of an 
 * extra exercise option that adds an additional charge per day 
 * based on different weight criteria.
 ***************************************************************/
int main()
{  
    // Declare and initialize variables
    int weightInPounds = 0.0;
    int daysPerMonth = 0.0;
    int extraExercise = 0.0;
    float ratePerDay = 0.0;
    float monthlyCharges = 0.0;   

    // Prompt user for how much their dog weighs in pounds
    printf("How many pounds does your dog weigh?:\t");
    scanf("%d", &weightInPounds);

    // Prompt user for the number of days per month for boarding
    printf("How many days per month for boarding?\t");
    scanf("%d", &daysPerMonth);

    // Prompt user if they would like an extra exercise option
    printf("Extra exercise? (1 = yes or 2 = no)\t");
    scanf("%d", &extraExercise);



    // Output calculation description, rate per day, and monthly charges
    printf("\nTo board a %d pound dog for %d days:\n", weightInPounds, daysPerMonth);
    printf("Rate per day:\t\t$%.2f\n", ratePerDay);
    printf("Monthly charges:\t$%.2f\n", monthlyCharges);

    // return success code
    return 0;
}