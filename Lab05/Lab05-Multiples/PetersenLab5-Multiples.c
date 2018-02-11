#include <stdio.h>

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will use a loop to print the first 5 multiples 
 * of the numbers 1 through 10. The multiples for each number 
 * will be separated by tab characters.
 ***************************************************************/
int main()
{
    // Declare and initialize all variables
    int row = 1; 
    int column = 1;
    int multiple = 0;

    // Print header columns
    printf("Number\t1st\t2nd\t3rd\t4th\t5th\n");

    // Loop for 10 rows
    while (row <= 10)
    {
        // Print row number 
        printf("%d\t", row);

        // Loop for 5 columns
        while (column <= 5)
        {
            // Calculate multiple
            multiple = row * column;

            // Print multiple in appropriate column
            printf("%d\t", multiple);

            // Increment column index
            column++;
        }

        // Reset column index to 1 and increment row index
        column = 1;
        row++;

        // Ensure next row starts on new line
        printf("\n");
    }

    // return success code
    return 0;
}