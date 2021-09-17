// program on to find the n to the power to the n

#include<stdio.h>
void main()
{
	int base, term;
	int result = 1,  powerCounter = 1;
	printf("how many terms you want? ");
	scanf("%d",&base);
    for(term = 1; term <= base; term++ )
    {
		while ( powerCounter <= term )
		{
			result = result * term ;
			powerCounter = powerCounter + 1 ;	
		}
	    printf("%d ", result);
    }
}