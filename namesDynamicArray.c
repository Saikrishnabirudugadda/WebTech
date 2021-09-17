// program on read and print names using dynamic array

#include<stdio.h>
void main()
{
		
		int numberOfNames;
		int loop;
		printf("Enter number of names: ");
		scanf("%d",&numberOfNames);
		char *names = (char*)malloc(numberOfNames * sizeof(char));
		 for ( loop = 1; loop <= numberOfNames; loop++ )
		 {
		 	printf("Give %d name: ",loop);
		 	scanf("%s", names[loop]);
		 }
		 for ( loop = 1; loop <= numberOfNames; loop++ )
		 {
		 	printf("%d name is : %s  \n",loop, names[loop]);
		 }
}