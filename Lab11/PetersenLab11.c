#include <stdio.h>
#include <string.h>

// Define symbolic constant for max string size
#define SIZE 11

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will prompt the user to enter a string, and 
 * then print each character of the string on a new line. Then 
 * print each character in reverse order, with the letters
 * separated by hyphens.
 ***************************************************************/
int main()
{  
    // Declare and initialize variables    
    char inputString[SIZE];
    int stringLength = 0;

    // Prompt user for string
    printf("Enter a string: ");
    // Ensure only up to 10 characters are allowed
    scanf("%10s", inputString);

    // Get length of strong
    stringLength = strlen(inputString);

    // Write each character of the string out on its own line
    printf("The string with each character on a new line:\n");
    for(int i = 0; i < stringLength; i++)
    {
        printf("%c\n", inputString[i]);
    }
    printf("\n");

    // Write the string backwards with hyphens between letters
    printf("The string printed backwards and separated by hyphens:\n");
    for(int i = stringLength - 1; i >= 0; i--)
    {
        printf("%c", inputString[i]);
        // Write hyphen except on last letter
        printf("%c", i > 0 ? '-' : ' ');
    }
    printf("\n");

    // return success code
    return 0;
}