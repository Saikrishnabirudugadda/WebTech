// program on read and print bank customer details using sturctures
#include<stdio.h>
struct bankCustomer
{
	char customerName[50];
	long long customerAccountNumber;
	int customerAge;
	long long customerMobileNumber;
	char customerAddress[50]; 
};

void main()
{
		struct bankCustomer customer;
		printf("Enter customer name: ");
		scanf("%s",customer.customerName);
		printf("Enter account number: ");
		scanf("%lld",&customer.customerAccountNumber);
		printf("Enter customerAge:");
		scanf("%d",&customer.customerAge);
		printf("Enter customerMobileNumber: ");
		scanf("%lld",&customer.customerMobileNumber);
		printf("Enter customerAddress:");
		scanf("%s", customer.customerAddress);
		printf("\n\n");
		printf("Customer Name is: %s\n",customer.customerName);
		printf("Cutomer Account number is: %lld\n ",customer.customerAccountNumber);
		printf("Customer age is: %d\n",customer.customerAge);
		printf("Customer mobile number is: %lld\n",customer.customerMobileNumber);
		printf("Customer address is: %s\n",customer.customerAddress);

}
