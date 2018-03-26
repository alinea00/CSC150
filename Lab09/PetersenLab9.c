#include <stdio.h>

// Function prototypes
double convertGallonsToLiters(int gallons);
double convertLitersToGallons(int liters);

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will display tabular data with appropriate 
 * headings to show liters converted to gallons, and then 
 * gallons converted to liters. 
 ***************************************************************/
int main()
{  
    // Declare and initialize variables    
    double liters = 0.0;
    double gallons = 0.0;

    // Prints headers for liters to gallons
    printf("Liters converted to gallons:\n");
    printf("Liters\tGallons\n");
    
    // Output table for liters to gallons
    for (int litersCounter = 100; litersCounter >= 0; litersCounter -= 5)
    {   
        // Call conversion function and output results
        gallons = convertLitersToGallons(litersCounter);

        printf("%d\t%.1f\n", litersCounter, gallons);
    }

    // Prints headers for gallons to liters
    printf("\nGallons converted to liters:\n");
    printf("Gallons\tLiters\n");

    // Output table for gallons to liters
    for (int gallonsCounter = 30; gallonsCounter >= 0; gallonsCounter -= 2)
    {
       // Call conversion function and output results
       liters = convertGallonsToLiters(gallonsCounter);

       printf("%d\t%.1f\n", gallonsCounter, liters); 
    }

    // return success code
    return 0;
}

/***************************************************************
 * This function converts gallons to liters.
 ***************************************************************/
double convertGallonsToLiters(int gallons)
{
    const double conversionFactor = 3.78541;

    return gallons * conversionFactor;
}

/***************************************************************
 * This function converts liters to gallons.
 ***************************************************************/
double convertLitersToGallons(int liters)
{
    const double conversionFactor = 0.26417;

    return liters * conversionFactor;
}