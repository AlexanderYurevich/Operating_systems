#include "Employee.h"
#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char* argv[]) {
    std::ifstream fin(argv[1], std::ios::binary);
    if (!fin.is_open()) {
        std::cerr << "Unable to open the input file";
        return -1;
    }

    std::string s = argv[2];
    s += ".txt";
    std::ofstream fout(s);

    if (!fout.is_open()) {
        std::cerr << "Unable to create the output file";
        return -1;
    }
    int wage = atoi(argv[3]);
    fout << "Report on file \"" << argv[1] << "\"\n";
    int employeeAmount;
    fin.read(reinterpret_cast<char*>(&employeeAmount), sizeof(int));
    Employee entry;
    for (int i = 0; i < employeeAmount; ++i) {
        fin.read(reinterpret_cast<char*>(&entry), sizeof(Employee));
        fout << entry.num << ' ' << entry.name << ' ' << entry.hours << ' ' << entry.hours * wage << '\n';
    }
    fin.close();
    fout.close();
    return 0;
}