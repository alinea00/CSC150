#include <stdio.h>

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will ask a user how many grades they wish to 
 * enter.  It will use a loop to get that many grade items from 
 * the user. Once all grades are entered, it calculates the 
 * average grade and uses an if...else if statement to print 
 * the corresponding letter grade.
 ***************************************************************/
int main()
{
    // Declare and initialize variables
    unsigned int numGrades = 0;
    float totalPoints = 0.0;
    float gradeItem = 0.0;
    float finalGrade = 0.0;
    char letterGrade = 'F';

    // Prompt user for number of grades to enter
    printf("How many grade items would you like to enter? ");
    scanf("%d", &numGrades);

    // Loop for number of grades
    for(int counter = 1; counter <= numGrades; counter++)
    {
        // Prompt user for grade item
        printf("Enter the grade for grade item number %d: ", counter);
        scanf("%f", &gradeItem);

        // Add grade to accumulated total of points
        totalPoints += gradeItem;
    }

    // Calculate final grade average
    finalGrade = totalPoints / numGrades;

    // Calculate letter grade.  
    if(finalGrade >= 90.0)
    {
        letterGrade = 'A';
    }
    else if(finalGrade >= 80.0)
    {
        letterGrade = 'B';
    }
    else if(finalGrade >= 70.0)
    {
        letterGrade = 'C';
    }
    else if(finalGrade >= 60.0)
    {
        letterGrade = 'D';
    }
    else 
    {
        letterGrade = 'F';
    }

    // Output final grade precentage and letter grade
    printf("\nAverage grade: %.2f%%\n", finalGrade);
    printf("Letter grade: %c\n", letterGrade);

    // return success code
    return 0;
}