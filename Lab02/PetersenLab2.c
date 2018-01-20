#include <stdio.h>

/****************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program asks the user to enter two numbers, 
 * obtains them from the user and prints their sum, 
 * difference, product, quotient and remainder in 
 * that order.
 ****************************************************/
int main()
{
    // Declare and initialize variables 
    int first = 0;    
    int second = 0;
    
    printf("Enter the first integer:\t");                   // Prompt for first integer
    scanf("%d", &first);                                    // Input first integer
    printf("Enter the second integer:\t");                  // Prompt for second integer
    scanf("%d", &second);                                   // Input second integer
    printf("\n");                                           // Blank space for readability       
    printf("The sum is:\t\t\t%d\n", first + second);        // Output sum
    printf("The difference is:\t\t%d\n", first - second);   // Output difference
    printf("The product is:\t\t\t%d\n", first * second);    // Output product
    printf("The quotient is:\t\t%d\n", first / second);     // Output quotient
    printf("The remainder is:\t\t%d\n", first % second);    // Output remainder 

    // return success code
    return 0;
}