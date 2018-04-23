#include <stdio.h>
#include <string.h>

#define NUM_GRADES 8

// Function prototypes
void sortAscending(unsigned int data[], unsigned int dataSize);

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

    for (int i = 0; i < NUM_GRADES; i++)
    {
        printf("Enter grade %d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    sortAscending(grades, NUM_GRADES);

    for (int i = 0; i < NUM_GRADES; i++)
    {
        printf("%d - X\n", grades[i]);
    }

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