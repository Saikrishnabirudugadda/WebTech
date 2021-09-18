// Read and print bank customer details using structures
#include<stdio.h>
#define NAME_LENGTH 30
#define ADDRESS_LENGTH 30
struct bankCustomer
{
	char customerName[NAME_LENGTH];
	long long customerAccountNumber;
	int customerAge;
	long long customerMobileNumber;
	char customerAddress[ADDRESS_LENGTH]; 
};

void main()
{
		struct bankCustomer customer;
		printf("Enter customer name: ");
		scanf("%s", customer.customerName);
		printf("Enter account number: ");
		scanf("%lld", &customer.customerAccountNumber);
		printf("Enter customer age:");
		scanf("%d", &customer.customerAge);
		printf("Enter customer mobile number: ");
		scanf("%lld", &customer.customerMobileNumber);
		printf("Enter customer address:");
		scanf("%s", customer.customerAddress);
		printf("\n%s's bank details are: \n", customer.customerName);
		printf("Customer Name is: %s\n", customer.customerName);
		printf("Cutomer Account number is: %lld\n ", customer.customerAccountNumber);
		printf("Customer age is: %d\n",customer.customerAge);
		printf("Customer mobile number is: %lld\n", customer.customerMobileNumber);
		printf("Customer address is: %s\n", customer.customerAddress);

}
