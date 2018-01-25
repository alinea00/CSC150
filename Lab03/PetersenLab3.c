#include <stdio.h>

/****************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program asks the user to enter three numbers. 
 * The program should print the smallest value, 
 * largest value, sum, average, and product of the 
 * numbers in that order.
 ****************************************************/
int main()
{
    // Declare and initialize variables 
    int entered_value = 0;    
    int smallest = 0;
    int largest = 0;
    int sum = 0;
    int average = 0;
    int product = 0;
    
    printf("Enter the first integer:\t");                       // Prompt for first integer
    scanf("%d", &entered_value);                                // Input first integer
    printf("Enter the second integer:\t");                      // Prompt for second integer
    scanf("%d", &entered_value);                                // Input second integer
    printf("Enter the third integer:\t");                       // Prompt for third integer
    scanf("%d", &entered_value);                                // Input third integer
    printf("\n");                                               // Blank space for readability       
    printf("The smallest number is:\t\t%d\n", smallest);      // Output smallest number
    printf("The largest number is:\t\t%d\n", largest);          // Output largest number
    printf("The sum of the numbers is:\t%d\n", sum);        // Output sum of the numbers
    printf("The average of the numbers is:\t%d\n", average);  // Output average of the numbers
    printf("The product of the numbers is:\t%d\n", product);  // Output product of the numbers

    // return success code
    return 0;
}