// Read and print names using dynamic array

#include<stdio.h>
#include<stdlib.h>
void main()
{
		
		int numberOfNames;
		int counter;
		printf("Enter number of names: ");
		scanf("%d",&numberOfNames);
		char *names = (char*)malloc(numberOfNames * sizeof(char));
		 for ( counter = 1; counter <= numberOfNames; counter++ )
		 {
		 	printf("Enter person%d name of %d: ", counter, numberOfNames);
		 	scanf("%s",&names[counter]);
		 }
		 printf("\n\n");
		 for ( counter = 1; counter <= numberOfNames; counter++ )
		 {
		 	printf("Person%d name is: %s\n", counter, names[counter]);
		 }
}