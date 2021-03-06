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

    // Determine daily rate based on days per month and weight
    if (daysPerMonth > 12)
    {
        if (weightInPounds < 12)
        {
            ratePerDay = 12.50;
        }
        else if (weightInPounds < 32)
        {
            ratePerDay = 15.00;
        }
        else
        {
            ratePerDay = 17.50;
        }
    }
    else
    {
        if (weightInPounds < 12)
        {
            ratePerDay = 15.00;
        }
        else if (weightInPounds < 32)
        {
            ratePerDay = 17.50;
        }
        else
        {
            ratePerDay = 20.00;
        }
    }
    
    // Add charges for extra exercise if requested
    if (extraExercise == 1)
    {
        if (weightInPounds > 20)
        {
            ratePerDay += 4.00;
        }
        else
        {
            ratePerDay += 2.00;
        } 
    }

    // Calculate monthly charges
    monthlyCharges = ratePerDay * daysPerMonth;

    // Output calculation description, rate per day, and monthly charges
    printf("\nTo board a %d pound dog for %d days%s:\n", weightInPounds, daysPerMonth, (extraExercise == 1 ? " with extra exercise" : ""));
    printf("Rate per day:\t\t$%.2f\n", ratePerDay);
    printf("Monthly charges:\t$%.2f\n", monthlyCharges);

    // return success code
    return 0;
}