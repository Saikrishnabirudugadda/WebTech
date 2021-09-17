// program on to find the n to the power to the n

#include<stdio.h>
void main()
{
	int base;
	int result = 1, powerCounter = 1;
	printf("This is n to the power of same number. give a positive number: ");
	scanf("%d",&base);
	while ( powerCounter <= base )
	{
		result = result * base ;
		powerCounter = powerCounter + 1 ;	
	}
	printf("%d to the power of %d is %d.", base, base, result);
}