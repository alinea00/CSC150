#include <stdio.h>

// Function prototypes
int getChartLength(int chartNumber);
void printChartLine(int chartLength);

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will prints 6 bar graphs with hashtags. 
 ***************************************************************/
int main()
{  
    // Declare and initialize variables  
    int chartLength1 = 0;
    int chartLength2 = 0;
    int chartLength3 = 0;
    int chartLength4 = 0;
    int chartLength5 = 0;
    int chartLength6 = 0;

    // Get all chart lengths
    chartLength1 = getChartLength(1);
    chartLength2 = getChartLength(2);
    chartLength3 = getChartLength(3);
    chartLength4 = getChartLength(4);
    chartLength5 = getChartLength(5);
    chartLength6 = getChartLength(6);
    
    // Prints newline
    printf("\n");

    // Print all chart lines
    printf("1. ");
    printChartLine(chartLength1);
    printf("2. ");
    printChartLine(chartLength2);
    printf("3. ");
    printChartLine(chartLength3);
    printf("4. ");
    printChartLine(chartLength4);
    printf("5. ");
    printChartLine(chartLength5);
    printf("6. ");
    printChartLine(chartLength6);

    // return success code
    return 0;
}

/***************************************************************
 * This function prompts the user for the length of the chart 
 * number given.  If they enter a value that is negative or 
 * greater than 36, it will prompt them again until they enter 
 * a valid number.
 ***************************************************************/
int getChartLength(int chartNumber)
{
    int chartLength = -1;

    // Prompt the user for the chart length until given a 
    // valid postive number less than or equal to 36.
    while (chartLength < 0 || chartLength > 36)
    {
        printf("How long is chart %d? ", chartNumber);
        scanf("%d", &chartLength);
    }
    
    return chartLength;
}

/***************************************************************
 * This function prints the chart line.
 ***************************************************************/
void printChartLine(int chartLength)
{
    printf("%2d|", chartLength);

    // Prints hashes up to the specified chart length.
    for (int counter = 0; counter < chartLength; counter++)
    {
        printf("#");
    }

    printf("\n");
}