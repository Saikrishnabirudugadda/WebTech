// Read and print n marks array

#include<stdio.h>
#define SUBJECT_NAME_LENGTH 30
void main()
{
		int numberOfSubjects;
		int counter;
		printf("Enter number of subjects: ");
		scanf("%d", &numberOfSubjects);
		int marks[numberOfSubjects];
		char subjectNames[numberOfSubjects][SUBJECT_NAME_LENGTH];
		for ( counter = 1; counter <= numberOfSubjects; counter++ )
		{
			printf("Enter subject-%d name of %d: ", counter,numberOfSubjects );
			scanf("%s", subjectNames[counter]);
			printf("Enter %s subject marks: ", subjectNames[counter]);
			scanf("%d", &marks[counter]);
		}
		printf("\nMarks of %d subjects are: \n",numberOfSubjects);
		for ( counter = 1; counter <= numberOfSubjects; counter++)
		{
			printf("%s subject marks is: %d\n", subjectNames[counter], marks[counter]);
		}
} 
