![image](https://github.com/diogo-adao/libft/assets/142692185/63ed68a2-74a6-4958-8d49-bf8d36a2d98e)

# 📨 Minitalk

A small data exchange program using **UNIX signals** (`SIGUSR1` and `SIGUSR2`).  
Developed as part of the **42 curriculum**, this project explores **inter-process communication (IPC)** by building a client and a server that communicate using only signals.


## 📖 Overview

`minitalk` consists of two programs:
- **server**: waits for signals and reconstructs characters from them  
- **client**: encodes and sends a message to the server, bit by bit, using signals  

The goal is to transmit messages from one process to another without using sockets, pipes, or other traditional communication methods.


## ⚙️ Features

✅ Client–server communication using only signals  
✅ Transmission of full strings (including spaces and special characters)  
✅ Signal-based binary encoding (`SIGUSR1` = 1, `SIGUSR2` = 0)  
✅ Real-time message reconstruction on the server  


## 🧠 Key Concepts

- **UNIX signals** – using `SIGUSR1` and `SIGUSR2` to send information between processes  
- **Bitwise operations** – encoding each character into 8 bits and reconstructing it on the server  
- **Process IDs (PID)** – the client needs the server's PID to send signals  
- **Signal handling** – using `signal()` to catch incoming signals and process them  
- **Timing control** – using `usleep()` in the client to ensure signals arrive in order without being missed


## 🧩 Installation & Usage

```bash
# Clone the repository
git clone https://github.com/diogo-adao/minitalk.git

# Go to the folder
cd minitalk

# Build the project
make

# Run the server
./server

It will display its PID:
PID: 12345

# Open a new terminal and send a message from the client
./client 12345 "Hello World!"

The server will receive and print:
Hello World!
```

## 👨‍💻 Author
[Diogo Adão](https://github.com/diogo-adao)

