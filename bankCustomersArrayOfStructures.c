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
		int numberOfCustomers, loop;
		printf("Enter number of customers:");
		scanf("%d",&numberOfCustomers);

		struct bankCustomers customer[numberOfCustomers];

		for ( loop = 1 ; loop <= numberOfCustomers; loop++)
		{
			printf("Enter Customer%d name: \n", loop);
			scanf("%s", customer[loop].customerName);
			printf("Enter Customer%d Account number: \n ",loop);
			scanf("%lld",&customer[loop].customerAccountNumber);
			printf("Enter Customer%d Mobile number: \n",loop);
			scanf("%lld",&customer[loop].customerMobileNumber);
			printf("Enter Customer%d Address: \n ",loop);
			scanf("%s", customer[loop].customerAddress);

		}
		for ( loop = 1 ; loop <= numberOfCustomers; loop++)
		{
			printf("Customer%d Details are: \n",loop);
			printf("Name: %s\n",customer[loop].customerName);
			printf("Account Number: %lld \n", customer[loop].customerAccountNumber);
			printf("MobileNumber: %lld \n",customer[loop].customerMobileNumber);
			printf("Address: %s\n",customer[loop].customerAddress);

		}

}