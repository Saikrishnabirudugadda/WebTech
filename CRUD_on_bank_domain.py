#  CRUD on bank Domain

fileName  = "customer2.dat"
data ={}
fData = open(fileName, "r")
data = fData.read()
if data == None:
	print("File is empty.")
else:
	data = eval(data)
def create():
	while(1):
		accountNumber = input("Enter account number: ")
		name = input("Enter customer name: ")
		balance = int(input("Enter account balance: "))
		status = 'A'
		data[accountNumber] = [name, balance, status]
		fData = open(fileName, "w")
		fData.write(str(data))
		fData.close()
		print("\nDetails saved successfully.")
		choice = input("Do You want to add another customer y(yes)/n(no): ")
		if choice.upper() == 'N':
			break
def display():
	print("\tBank Customer Details.")
	print("\t", '-' * len("Bank Customer Details"))
	for record in data:
		if data[record][2] == 'A':
			print("Cutomer account number: ", record)
			print("Cutomer name: ", data[record][0])
			print("Account balance: ", data[record][1])
			print("-------------------------------\n")


def update():
	accountNumber = input("\nEnter account number of customer you want to update: ")
	option = int(input("\n1. Name\n2. Balance\nChoose which field you want to update: "))
	for record in data:
		if record == accountNumber:
			if option == 1:
				data[record][0] = input("Enter new name: ")
			if option == 2:
				data[record][1] = input("Enter new balance: ")
	fData = open(fileName, "w")
	fData.write(str(data))
	fData.close()
	print("\nCustomer details updated successfully.")
def delete():
	accountNumber = input("Enter account number you want to delete: ")
	for record in data:
		if record == accountNumber:
			data[record][2] = 'D'
	fData =open(fileName, "w")
	fData.write(str(data))
	fData.close()
	print("account number", accountNumber, "is deleted successfully")

while(1):
	print("\n1. Create new customer\n2. Display all customer details\n3. Update customer details\n4. Delete customer")
	menu = [create, display, update, delete]
	menu[int(input("\nEnter your choice: ")) - 1]()
	choice = input("\nEnter any key to continue and E for exit: ")
	if choice.upper() == 'E':
		break
