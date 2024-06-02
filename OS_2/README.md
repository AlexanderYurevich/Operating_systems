# Creating threads
The program creates three threads: main, min_max, and average. The main thread creates an array of integers, launches the min_max and average threads,
waits for their completion, replaces the maximum and minimum elements of the array with the average value,
and outputs the results to the console. The min_max and average threads find the minimum, maximum, and average elements of the array with periodic "sleeping".
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
