#  client program

from socket import AF_INET, socket, SOCK_STREAM
import tkinter
from threading import Thread

def recieveMessages():
    while True:
        try:
            message = cs.recv(1024).decode()
            messages.insert(tkinter.END, message)
        except OSError:
            break
def sendMessages(event = None):
    message = clientMessage.get()
    clientMessage.set("")
    cs.send((message).encode())
    if message == "quit":
        cs.close()
        root.quit()

def closeWindow(event = None):
    clientMessage.set("quit")
    sendMessages()



root = tkinter.Tk()
root.title("Common Chat Room")
messageFrame = tkinter.Frame(root)
clientMessage = tkinter.StringVar()
clientMessage.set("Type your message here....")
scrollbar = tkinter.Scrollbar(messageFrame) 
messages = tkinter.Listbox(messageFrame, height = 30, width = 50, yscrollcommand = scrollbar.set)
scrollbar.pack(side = tkinter.RIGHT, fill = tkinter.Y)
messages.pack(side = tkinter.LEFT, fill = tkinter.BOTH)
messages.pack()
messageFrame.pack()

messageEntryField = tkinter.Entry(root, textvariable = clientMessage)
messageEntryField.bind("<Return>", sendMessages)
messageEntryField.pack()
sendButton = tkinter.Button(root, text = "Send", command = sendMessages)
sendButton.pack()
root.protocol("WM_DELETE_WINDOW", closeWindow)
host = "165.22.14.77"
port = 1947
cs = socket(AF_INET, SOCK_STREAM)
cs.connect((host, port))

thread = Thread(target = recieveMessages)
thread.start()
tkinter.mainloop()