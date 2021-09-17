// read and print marks using array

#include<stdio.h>
#define COUNT 3
void main()
{
		int marks[COUNT]; 
		int iterator;
		for ( iterator = 0  ; iterator < COUNT ; iterator++)
		{ 		
			printf("Give subject-%d of %d marks: ", iterator + 1, COUNT );
			scanf("%d",&marks[iterator]);
		}
		printf("\nMarks of %d subjects are: \n\n",COUNT);
		for (iterator = 0; iterator < COUNT; iterator++)
		{
			printf("Subject-%d marks is: %d \n", iterator + 1, marks[iterator] );
		}

}