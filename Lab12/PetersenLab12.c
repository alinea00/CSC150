#include <stdio.h>
#include <string.h>

#define NUM_GRADES 8

// Function prototypes
void sortAscending(unsigned int data[], unsigned int dataSize);
char calculateLetterGrade(float numericGrade);

/***************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will prompt the user for eight numeric grades.
 * rint the eight scores in ascending order along with the 
 * corresponding letter grade for each score.  After all numeric 
 * and letter grades are displayed, the average numeric grade 
 * will be shown to one decimal place with a percent sign,
 * and the letter grade that corresponds to the average.
 ***************************************************************/
int main()
{  
    // Declare and initialize variables    
    unsigned int grades[NUM_GRADES] = {0};
    char letterGrade = 'F';
    float totalGrades = 0.0;
    float average = 0.0;

    for (int i = 0; i < NUM_GRADES; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);

        totalGrades += grades[i];
    }

    sortAscending(grades, NUM_GRADES);

    printf("\nSorted grades:\n");

    for (int i = 0; i < NUM_GRADES; i++)
    {
        letterGrade = calculateLetterGrade(grades[i]);
        printf("%3d - %c\n", grades[i], letterGrade);
    }

    average = (float)(totalGrades / NUM_GRADES);
    letterGrade = calculateLetterGrade(average);
    printf("\nGrade average of the %d grades: %.1f - %c", NUM_GRADES, average, letterGrade);

    // return success code
    return 0;
}

void sortAscending(unsigned int data[], unsigned int dataSize)
{
    for (unsigned int pass = 1; pass < dataSize; pass++)
    {
        for (unsigned int i = 0; i < dataSize - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                unsigned int temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }
}

char calculateLetterGrade(float numericGrade)
{
    char letterGrade = 'F';

    // Calculate letter grade.  
    if(numericGrade >= 90.0)
    {
        letterGrade = 'A';
    }
    else if(numericGrade >= 80.0)
    {
        letterGrade = 'B';
    }
    else if(numericGrade >= 70.0)
    {
        letterGrade = 'C';
    }
    else if(numericGrade >= 60.0)
    {
        letterGrade = 'D';
    }
    else 
    {
        letterGrade = 'F';
    }

    return letterGrade;
}