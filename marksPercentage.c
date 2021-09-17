// read subject marks and print mark's percentage

#include<stdio.h>
#define NUMBER_OF_SUBJECTS 5
#define SUBJECTS_NAME_LENGTH 15
#define EACH_SUBJECT_MARKS 100
void main()
{
		int subjectMarks[NUMBER_OF_SUBJECTS];
		char subjectName[NUMBER_OF_SUBJECTS][SUBJECTS_NAME_LENGTH];
		int counter, sumOfMarks = 0;
		int percentage = 0;
		for (counter = 0; counter < NUMBER_OF_SUBJECTS; counter++)
		{
			printf("Enter name of subject%d of %d: ",counter + 1, NUMBER_OF_SUBJECTS);
			scanf("%s",subjectName[counter]);
			printf("Enter marks of subject%d of %d: ", counter + 1, NUMBER_OF_SUBJECTS);
			scanf("%d",&subjectMarks[counter]);
		}
		for (counter = 0; counter < NUMBER_OF_SUBJECTS; counter++)
		{
				sumOfMarks = sumOfMarks + subjectMarks[counter];		
		}
		percentage = sumOfMarks / NUMBER_OF_SUBJECTS;
		printf("You got %d marks scored out of %d  and \n percentage is %d%%", sumOfMarks, NUMBER_OF_SUBJECTS * EACH_SUBJECT_MARKS, percentage);

}