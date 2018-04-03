#include <stdio.h>

// Function prototypes
void printName();
void printSquares();

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will gives the user 2 menu options: either call 
 * a function that will print a greeting and your name 5 times 
 * or call a function that will display the squares of the 
 * numbers from 12 to 0.
 ***************************************************************/
int main()
{  
    // Declare and initialize variables    
    int menuChoice = 0;

    // Prints headers for liters to gallons
    while (menuChoice != 1 && menuChoice != 2)
    {
        printf("What would you like to do?\n");
        printf("  1. Print my name\n");
        printf("  2. Show squares of numbers from 12 to 0\n");
        printf("\nChoice: ");

        scanf("%d", &menuChoice);
    }
    
    switch(menuChoice)
    {
        case 1:
            printName();
            break;
        case 2:
            printSquares();
            break;
    }
    
    // return success code
    return 0;
}

/***************************************************************
 * This function prints my name five times.
 ***************************************************************/
void printName()
{
    for (int counter = 0; counter < 5; counter ++)
    {
        printf("Hi, my name is Heather.\n");
    }
}

/***************************************************************
 * This function prints the squares from 12 to 0.
 ***************************************************************/
void printSquares()
{

}