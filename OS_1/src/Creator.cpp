#include "../include/Employee.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
int main(int argc, char* argv[]) {

    std::string s = argv[1];
    s += ".bin";
    std::ofstream fout(s, std::ios::binary);

    if (!fout.is_open()) {
        std::cerr << "Error opening the file for writing!" << std::endl;
        return -1;
    }

    int employeeAmount = atoi(argv[2]);
    std::vector <Employee> records(employeeAmount);

    for (int i = 0; i < employeeAmount; ++i) {
        std::cout << "Enter the emoployee's ID:";
        std::cin >> records[i].num;
        std::cout << "Enter the name of an employee:";
        std::cin >> records[i].name;
        std::cout << "Enter the hours of an employee number:";
        std::cin >> records[i].hours;
    }

    fout.write(reinterpret_cast<char*>(&employeeAmount), sizeof(int)); // amount of records

    for (int i = 0; i < employeeAmount; ++i) {
        fout.write(reinterpret_cast<char*>(&records[i]), sizeof(Employee));
    }
    fout.close();
    return 0;
}