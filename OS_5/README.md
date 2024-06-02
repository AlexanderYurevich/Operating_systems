# Passing Data with Named Pipes
The program consists of a server process and multiple client processes. The server creates a binary file with employee records, launches the client processes, 
and handles their requests to modify or read records, blocking access as needed.
The clients cyclically request to modify or read records,
accessing them by employee ID. After all clients finish, the server displays the modified file and terminates upon a console command.
# Stack
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
# How to run locally
Build and run the project using **Makefile**:
```bash
make run
```
