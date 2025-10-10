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
✅ Robust error handling and signal safety  


## 🧠 Key Concepts

- **UNIX signals** – asynchronous software interrupts  
- **Bitwise operations** – encoding and decoding characters bit by bit  
- **Process IDs (PID)** – identifying and targeting processes  
- **Asynchronous programming** – handling signals safely  
- **System calls** – `kill()`, `pause()`, `sigaction()`, `getpid()`
  

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

# Send a message from the client
./client 12345 "Hello World!"

The server will receive and print:
Hello World!
```

