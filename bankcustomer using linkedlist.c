
// create, display, sort, and delete operations on bank domain using linked list 

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct bankCustomer
{
    
    int accountNumber;
    char name[20];
    int balance;
    struct bankCustomer *next;
    
}* head;
void create()
{
	int accountNumber;
    char name[20];
    int balance;



	printf("Enter account number: ");
    scanf("%d", &accountNumber);
    printf("Enter customer name: ");
    scanf("%s", name);
    printf("Enter account balance: ");
    scanf("%d", &balance);
    struct bankCustomer * customer = (struct bankCustomer *) malloc(sizeof(struct bankCustomer));
    customer->accountNumber = accountNumber;
    strcpy(customer->name, name);
    customer->balance = balance;
    customer->next = NULL;
    
    if(head == NULL)
    {
        head = customer;
    }
    else
    {
        customer->next = head;
        head = customer;
    }
    
}
void delete(int accountNumber)
{
    struct bankCustomer * temp1 = head;
    struct bankCustomer * temp2 = head; 
    while(temp1 != NULL)
    {
        
        if(temp1->accountNumber == accountNumber)
        {
            if(temp1 == temp2){
                head = head->next;
                free(temp1);
            }
            else
            {
                temp2->next = temp1->next;
                free(temp1); 
            }
            
            printf("Record successfully deleted\n");
            return;
            
        }
        temp2 = temp1;
        temp1 = temp1->next;
        
    }
    printf("Account number %d is not found\n", accountNumber);
    
}


void sort()
{
    struct bankCustomer *node = NULL, *temp = NULL;
    int tempvar;
    node = head;
    while(node != NULL)
    {
        temp = node; 
        while(temp->next != NULL)
        {
           if(temp->accountNumber > temp->next->accountNumber)
            {
              tempvar = temp->accountNumber;
              temp->accountNumber = temp->next->accountNumber;
              temp->next->accountNumber = tempvar;
            }
         temp = temp->next;   
        }
        node = node->next;    
    }
  	printf("Records are sorted.");
}
void display()
{
    struct bankCustomer * temp = head;
    while(temp != NULL){
        
        printf("\nAccount Number: %d\n", temp->accountNumber);
        printf("Customer name: %s\n", temp->name);
        printf("Account balance: %d\n\n", temp->balance);
        temp = temp->next;
        
    }
}
int main()
{
    head = NULL;
    int choice;
    int accountNumber;
    do
    {
    	printf("\n1. Create new customer\n2. Display all cutsomers\n3. Delete customer\n4. Sort the Cutosmer details\n 5. Exit\n\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
        {
            case 1: create();
			break;
                
            case 2: display();
            break;
            case 3: printf("Enter account number to delete: ");
					scanf("%d", &accountNumber);
		        	delete(accountNumber);
	        break;
            case 4: sort();
            		display();
			break;
            case 5: exit(0);
            break;
            default: printf("Invlaid choice. ");
        }
        
    }while(choice != 5);
}
