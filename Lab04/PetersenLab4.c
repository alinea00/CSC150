#include <stdio.h>

/*****************************************************************************
 * Author: Heather Petersen
 * Class:  CSC 150 Computer Science I
 * 
 * This program will calculate an overall course grade based on this information:

 * Submissions 	Quantity	Points per submission	Total points	% of Grade
 * Assignments		12			25						300				46%
 * Quizzes			11			10						110				17%
 * Tests			3			65						195				30%
 * DSU				1			45						 45				 7% 
 ******************************************************************************/
int main()
{
    // declare variables for individual scores
    float assignment1 = 0.0;
    float assignment2 = 0.0;
    float assignment3 = 0.0;
    float assignment4 = 0.0;
    float assignment5 = 0.0;
    float assignment6 = 0.0;
    float assignment7 = 0.0;
    float assignment8 = 0.0;
    float assignment9 = 0.0;
    float assignment10 = 0.0;
    float assignment11 = 0.0;
    float assignment12 = 0.0;
    float quiz1 = 0.0;
    float quiz2 = 0.0;
    float quiz3 = 0.0;
    float quiz4 = 0.0;
    float quiz5 = 0.0;
    float quiz6 = 0.0;
    float quiz7 = 0.0;
    float quiz8 = 0.0;
    float quiz9 = 0.0;
    float quiz10 = 0.0;
    float quiz11 = 0.0;
    float test1 = 0.0;
    float test2 = 0.0;
    float test3 = 0.0;
    float dsuTechExam = 0.0;
    float overallScore = 0.0;
    float totalPointsReceived = 0.0;
    float totalPointsPossible = 650.0;

   // prompt and get input for all assignments
    printf("%s", "Enter the score for Assignment 1:\t");
    scanf("%f", &assignment1);
    printf("%s", "Enter the score for Assignment 2:\t");
    scanf("%f", &assignment2);
    printf("%s", "Enter the score for Assignment 3:\t");
    scanf("%f", &assignment3);
    printf("%s", "Enter the score for Assignment 4:\t");
    scanf("%f", &assignment4);
    printf("%s", "Enter the score for Assignment 5:\t");
    scanf("%f", &assignment5);
    printf("%s", "Enter the score for Assignment 6:\t");
    scanf("%f", &assignment6);
    printf("%s", "Enter the score for Assignment 7:\t");
    scanf("%f", &assignment7);
    printf("%s", "Enter the score for Assignment 8:\t");
    scanf("%f", &assignment8);
    printf("%s", "Enter the score for Assignment 9:\t");
    scanf("%f", &assignment9);
    printf("%s", "Enter the score for Assignment 10:\t");
    scanf("%f", &assignment10);
    printf("%s", "Enter the score for Assignment 11:\t");
    scanf("%f", &assignment11);
    printf("%s", "Enter the score for Assignment 12:\t");
    scanf("%f", &assignment12);

    // prompt and get input for all quizzes 
    printf("%s", "Enter the score for Quiz 1:\t\t");
    scanf("%f", &quiz1);
    printf("%s", "Enter the score for Quiz 2:\t\t");
    scanf("%f", &quiz2);
    printf("%s", "Enter the score for Quiz 3:\t\t");
    scanf("%f", &quiz3);
    printf("%s", "Enter the score for Quiz 4:\t\t");
    scanf("%f", &quiz4);
    printf("%s", "Enter the score for Quiz 5:\t\t");
    scanf("%f", &quiz5);
    printf("%s", "Enter the score for Quiz 6:\t\t");
    scanf("%f", &quiz6);
    printf("%s", "Enter the score for Quiz 7:\t\t");
    scanf("%f", &quiz7);
    printf("%s", "Enter the score for Quiz 8:\t\t");
    scanf("%f", &quiz8);
    printf("%s", "Enter the score for Quiz 9:\t\t");
    scanf("%f", &quiz9);
    printf("%s", "Enter the score for Quiz 10:\t\t");
    scanf("%f", &quiz10);
    printf("%s", "Enter the score for Quiz 11:\t\t");
    scanf("%f", &quiz11);

    // prompt and get input for all tests
    printf("%s", "Enter the score for Test 1:\t\t");
    scanf("%f", &test1);
    printf("%s", "Enter the score for Test 2:\t\t");
    scanf("%f", &test2);
    printf("%s", "Enter the score for Test 3:\t\t");
    scanf("%f", &test3);

    // prompt and get input for DSU Tech exam
    printf("%s", "Enter the score for DSU Tech Exam:\t");
    scanf("%f", &dsuTechExam);

    // Calculate overall score putting one statment
    // per line for readability.
    totalPointsReceived = assignment1
        + assignment2
        + assignment3
        + assignment4
        + assignment5
        + assignment6
        + assignment7
        + assignment8
        + assignment9
        + assignment10
        + assignment11
        + assignment12
        + quiz1
        + quiz2
        + quiz3
        + quiz4
        + quiz5
        + quiz6
        + quiz7
        + quiz8
        + quiz9
        + quiz10
        + quiz11
        + test1
        + test2
        + test3
        + dsuTechExam;
    
    overallScore = (totalPointsReceived / totalPointsPossible) * 100;

    // Output course grade as a precentage
    printf("\nThe overall course grade is:\t\t%.2f%%", overallScore);

    // return success code
    return 0;
}