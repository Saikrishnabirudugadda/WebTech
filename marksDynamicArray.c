// program on read and print marks using dynamic array

#include<stdio.h>
void main()
{
		int* marks;
		int numberOfSubjects;
		int loop;
		printf("enter number of subjects: ");
		scanf("%d",&numberOfSubjects);
		marks = (int*)malloc(numberOfSubjects * sizeof(int));
		 for ( loop = 1 ; loop <= numberOfSubjects ; loop++)
		 {
		 	printf("give %d subject marks: ",loop);
		 	scanf("%d",&marks[loop]);
		 }
		 for ( loop = 1 ; loop <= numberOfSubjects; loop++)
		 {
		 	printf("%d subject marks : %d\n",loop, marks[loop]);
		 }
}