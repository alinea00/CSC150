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
    
   //prompt and get input for all scores
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

    //get quiz scores 
    printf("%s", "Enter the score for Quiz 1:\t");
    scanf("%f", &quiz1);
    printf("%s", "Enter the score for Quiz 2:\t");
    scanf("%f", &quiz2);
    printf("%s", "Enter the score for Quiz 3:\t");
    scanf("%f", &quiz3);
    printf("%s", "Enter the score for Quiz 4:\t");
    scanf("%f", &quiz4);
    printf("%s", "Enter the score for Quiz 5:\t");
    scanf("%f", &quiz5);
    printf("%s", "Enter the score for Quiz 6:\t");
    scanf("%f", &quiz6);
    printf("%s", "Enter the score for Quiz 7:\t");
    scanf("%f", &quiz7);
    printf("%s", "Enter the score for Quiz 8:\t");
    scanf("%f", &quiz8);
    printf("%s", "Enter the score for Quiz 9:\t");
    scanf("%f", &quiz9);
    printf("%s", "Enter the score for Quiz 10:\t");
    scanf("%f", &quiz10);
    printf("%s", "Enter the score for Quiz 11:\t");
    scanf("%f", &quiz11);

    // get test scores
    printf("%s", "Enter the score for Test 1:\t");
    scanf("%f", &test1);
    printf("%s", "Enter the score for Test 2:\t");
    scanf("%f", &test2);
    printf("%s", "Enter the score for Test 3:\t");
    scanf("%f", &test3);

    //get dsu tech scores 
    printf("%s", "Enter the score for DSU Tech Exam:\t");
    scanf("%f", &dsuTechExam);

    // Calculate overall score.

    printf("The overall course grade is:\t\t%f\n", overallScore);        // Output smallest number

    // return success code
    return 0;
}