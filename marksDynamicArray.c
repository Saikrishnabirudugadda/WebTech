// Read and print marks using malloc() function

#include<stdio.h>
#include<stdlib.h>
void main()
{
		
		int numberOfSubjects;
		int counter;
		int* marks;
		printf("Enter number of subjects: ");
		scanf("%d",&numberOfSubjects);
		 marks = (int*)malloc(numberOfSubjects * sizeof(int));
		 for ( counter = 1 ; counter <= numberOfSubjects ; counter++)
		 {
		 	printf("Enter subject-%d of %d marks: ", counter,numberOfSubjects);
		 	scanf("%d",&marks[counter]);
		 }
		 printf("\nThe total %d subjects are:\n", numberOfSubjects);
		 for ( counter = 1 ; counter <= numberOfSubjects; counter++)
		 {
		 	printf("Subject-%d marks is: %d\n",counter, marks[counter]);
		 }
}