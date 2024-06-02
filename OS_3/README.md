# Synchronizing threads using critical sections
The program consists of the main thread and several instances of the marker thread. The main thread allocates an array of integers,
launches the specified number of marker threads, signals their start, and then enters a loop of waiting for the marker threads to signal they cannot continue, 
displaying the array, terminating one marker thread, and signaling the remaining marker threads to continue. The marker threads generate random numbers,
attempt to mark array elements with their ID, and signal the main thread if they cannot proceed, waiting for the main thread's signal to continue or terminate.
# Stack
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
# How to run locally
1. **Create a build directory:**
    ```bash
    mkdir build
    cd build
    ```

2. **Configure the project using CMake:**
    ```bash
    cmake ..
    ```

3. **Build the project:**
    ```bash
    cmake --build .
    ```
