#include <iostream>
#include <array>
#include "employeestruct.hpp"

int main()
{
    // Create an array
    std::array<HR::Employee, 3> employeeArray;

    employeeArray[0].firstInitial = 'M';
    employeeArray[0].lastInitial = 'G';
    employeeArray[0].employeeNumber = 42;
    employeeArray[0].salary = 80000;
    employeeArray[0].title = HR::level::Manager;

    employeeArray[1].firstInitial = 'L';
    employeeArray[1].lastInitial = 'S';
    employeeArray[1].employeeNumber = 43;
    employeeArray[1].salary = 70000;
    employeeArray[1].title = HR::level::SeniorEngineer;

    employeeArray[2].firstInitial = 'R';
    employeeArray[2].lastInitial = 'K';
    employeeArray[2].employeeNumber = 44;
    employeeArray[2].salary = 60000;
    employeeArray[2].title = HR::level::Engineer;

    
    // Output the values of employeeArray

    for (size_t i = 0; i < employeeArray.size(); i++) {
        std::cout << "Employee: " << employeeArray[i].firstInitial <<
                                     employeeArray[i].lastInitial << std::endl;
        std::cout << "Number: " << employeeArray[i].employeeNumber << std::endl;                                     
        std::cout << "Salary: " << employeeArray[i].salary << std::endl;
        switch(employeeArray[i].title) {
            case HR::level::Manager:
                std::cout << "Manager" << std::endl;
                break;
            case HR::level::SeniorEngineer:
                std::cout << "Senior Engineer" << std::endl;
                break;
            case HR::level::Engineer:
                std::cout << "Engineer" << std::endl;
                break;
            default:
                std::cout << "No title" << std::endl;
                break;
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}