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
    int first = 0; 
    int second = 0;
    
    printf("Enter the first interger:\t");
    scanf("%d", &first);
    printf("Enter the second interger:\t");
    scanf("%d", &second);
    printf("\n");
    printf("The sum is:\t%d", first + second);
    printf("The difference is:\t%d", first - second);
    printf("The product is:\t%d", first * second);
    printf("The quotient is:\t%d", first / second);
    printf("The remainder is:\t%d", first % second);

    // return success code
    return 0;
}