#include <stdio.h>

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will input a series of 10 non-negative numbers 
 * then determine and print the largest of the numbers.
 ***************************************************************/
int main()
{
    // Declare and initialize all variables
    unsigned int counter = 1; 
    unsigned int number = 0;
    unsigned int largest = 0;

    // Run the loop 10 times
    while (counter <= 10)
    {
        // Prompt user for number
        printf("Enter number %d: ", counter);
        scanf("%d", &number);
        
        // Check if number is greater than largest and if so
        // make it the new largest
        if (number > largest)
        {
            largest = number;
        }
        
        // Increment counter for next loop
        counter++;
    }
  
    // Output largest number 
    printf("\nThe larget number is: %d\n", largest);

    // return success code
    return 0;
}