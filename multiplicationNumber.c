// program on multiplication on given number

#include<stdio.h>
void main()
{
	int multiplicationNumner, counter;
	printf("which multipliaction table you want? ");
	scanf("%d",&multiplicationNumner);
	for ( counter = 1 ; counter <= 20 ; counter ++)
	{
		printf("%d X %d = %d \n", multiplicationNumner, counter, multiplicationNumner * counter);
	}	
}