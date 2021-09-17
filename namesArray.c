//  read and print names using array

#include<stdio.h>
#define COUNT 5
#define NAME_LENGTH
void main()
{
		char names[COUNT][NAME_LENGTH];
		int loop;
		for ( loop = 0; loop < COUNT; loop++)
		{
			printf("Enter Person name-%d of %d: ", loop + 1, COUNT);
			scanf("%s",names[loop]);
		}
		printf("\nNames of the %d persons are:\n\n", COUNT);
		for ( loop = 0; loop < COUNT; loop++)
		{
			printf("Person%d name is : %s \n", loop + 1, names[loop]);
		}
}