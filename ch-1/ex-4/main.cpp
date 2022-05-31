#include <iostream>
#include <vector>
#include "employeestruct.hpp"

int main()
{
    // Create a vector
    std::vector<HR::Employee> employeeVector;
    HR::Employee newEmployee;

    newEmployee.firstInitial = 'M';
    newEmployee.lastInitial = 'G';
    newEmployee.employeeNumber = 42;
    newEmployee.salary = 80000;
    newEmployee.title = HR::level::Manager;
    employeeVector.push_back(newEmployee);

    newEmployee.firstInitial = 'L';
    newEmployee.lastInitial = 'S';
    newEmployee.employeeNumber = 43;
    newEmployee.salary = 70000;
    newEmployee.title = HR::level::SeniorEngineer;
    employeeVector.push_back(newEmployee);

    newEmployee.firstInitial = 'R';
    newEmployee.lastInitial = 'K';
    newEmployee.employeeNumber = 44;
    newEmployee.salary = 60000;
    newEmployee.title = HR::level::Engineer;
    employeeVector.push_back(newEmployee);
    
    // Output the values of employeeVector

    for (size_t i = 0; i < employeeVector.size(); i++) {
        std::cout << "Employee: " << employeeVector[i].firstInitial <<
                                     employeeVector[i].lastInitial << std::endl;
        std::cout << "Number: " << employeeVector[i].employeeNumber << std::endl;                                     
        std::cout << "Salary: " << employeeVector[i].salary << std::endl;
        switch(employeeVector[i].title) {
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