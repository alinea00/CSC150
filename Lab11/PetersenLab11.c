#include <stdio.h>
#include <string.h>

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

    printf("Enter a string: ");
    scanf("%10s", inputString);
    stringLength = strlen(inputString);

    printf("The string with each character on a new line:\n");
    for(int i = 0; i < stringLength; i++)
    {
        printf("%c\n", inputString[i]);
    }
    printf("\n");

    printf("The string printed backwards and separated by hyphens:\n");
    for(int i = stringLength - 1; i >= 0; i--)
    {
        printf("%c", inputString[i]);
        printf("%c", i > 0 ? '-' : ' ');
    }
    printf("\n");

    // return success code
    return 0;
}