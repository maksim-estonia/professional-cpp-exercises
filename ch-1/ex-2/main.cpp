#include <iostream>
#include "employeestruct.hpp"

int main()
{
    // Create and populate an employee
    HR::Employee anEmployee {
        .firstInitial = 'M',
        .lastInitial = 'G',
        .employeeNumber = 42,
        .salary = 80000,
        .title = HR::level::Manager
    };
    // Output the values of an employee
    std::cout << "Employee: " << anEmployee.firstInitial <<
                                     anEmployee.lastInitial << std::endl;
    std::cout << "Number: " << anEmployee.employeeNumber << std::endl;                                     
    std::cout << "Salary: " << anEmployee.salary << std::endl;
    
    switch(anEmployee.title) {
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

    return EXIT_SUCCESS;
}