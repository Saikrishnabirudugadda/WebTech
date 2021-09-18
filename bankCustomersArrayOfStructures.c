// program on  N number of bankcustomers using concept of array of Structures

#include<stdio.h>

struct bankCustomers 
{
	char customerName[30];
	long long customerAccountNumber;
	long long customerMobileNumber;
	char customerAddress[20];
};

void main()
{		
		int numberOfCustomers, counter;
		printf("Enter number of customers:");
		scanf("%d", &numberOfCustomers);

		struct bankCustomers customer[numberOfCustomers];

		for ( counter = 1 ; counter <= numberOfCustomers; counter++)
		{
			printf("Enter Customer%d name: \n", counter);
			scanf("%s", customer[counter].customerName);
			printf("Enter Customer%d Account number: \n ", counter);
			scanf("%lld", &customer[counter].customerAccountNumber);
			printf("Enter Customer%d Mobile number: \n", counter);
			scanf("%lld", &customer[counter].customerMobileNumber);
			printf("Enter Customer%d Address: \n", counter);
			scanf("%s", customer[counter].customerAddress);

		}
		for ( counter = 1 ; counter <= numberOfCustomers; counter++ )
		{
			printf("%s details are: \n", customer[counter].customerName);
			printf("Name: %s\n", customer[counter].customerName);
			printf("Account Number: %lld \n", customer[counter].customerAccountNumber);
			printf("MobileNumber: %lld \n", customer[counter].customerMobileNumber);
			printf("Address: %s\n", customer[counter].customerAddress);

		}

}