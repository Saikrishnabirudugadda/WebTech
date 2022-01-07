#  main server program
from socket import AF_INET, socket, SOCK_STREAM
from threading import Thread


def acceptConnections():
	while True:
		client, addr = ss.accept()
		print(addr[0] + "connected")
		client.send(("Enter your name: ").encode())
		addresses[client] = addr
		Thread(target = clientThread, args = (client,)).start()

def clientThread(client):
	clientName = client.recv(1024).decode()
	InviteMessage = "welcome to the chat box " + clientName +  ". Enter exit to exit from the chat."
	client.send((InviteMessage).encode())
	displayMessages("joined the chat", clientName)
	clients[client] = clientName

	while True:
		message = client.recv(1024).decode()
		if message.lower() != "exit":
			displayMessages(message, (clientName + " : "))
		else:
			client.send(("quit").encode())
			client.close()
			del clients[client]
			displayMessages("left the chat room.", clientName)
			break

def displayMessages(message, prefix = ""):
	for client in clients:
		client.send((prefix + message).encode())


clients = {}
addresses = {}

host = "165.22.14.77"
port = 1947
ss = socket(AF_INET, SOCK_STREAM)
ss.bind((host, port))
ss.listen(7)
print("Waiting for connection")
thread = Thread(target = acceptConnections)
thread.start()
thread.join()
ss.close()