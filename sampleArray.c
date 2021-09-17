// prigram on read and print marks using array

#include<stdio.h>
void main()
{
		int marks[6]; 
		int iterator;
		for ( iterator = 1 ; iterator <= 5 ; iterator = iterator + 1)
		{ 		
			printf("give %d subject marks: ", iterator);
			scanf("%d",&marks[iterator]);
		}
		for ( iterator = 1 ; iterator <= 5 ; iterator = iterator + 1)
		{
			printf("%d subject marks is: %d \n ", iterator, marks[iterator] );
		}

}