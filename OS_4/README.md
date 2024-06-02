# Synchronization of processes
The program consists of one Receiver process and multiple Sender processes. Sender processes send messages to the Receiver through a shared binary file.
# Stack
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
# Features
The `Receiver` Process:
- Input from the console the name of the binary file and the number of records in it.
- Create a binary file for messages with a maximum message length of 20 characters.
- Input from the console the number of Sender processes.
- Launch the specified number of Sender processes, passing each the name of the message file.
- Wait for a signal indicating readiness from all Sender processes.
- Cycle through actions as commanded from the console: read a message from the binary file or terminate the process.

The `Sender` Process:
- Open the file for sending messages, with the filename obtained from the command line.
- Send a signal to the Receiver process indicating readiness.
- Cycle through actions as commanded from the console: send a message to the Receiver process or terminate its own execution.
# How to run locally
To build and run the project using **Makefile**:
```bash
make run
```
