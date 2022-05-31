#include <iostream>
#include "employeestruct.hpp"

int main()
{
    // Create and populate an employee
    HR::Employee anEmployee {
        .firstInitial = 'M',
        .lastInitial = 'G',
        .employeeNumber = 42,
        .salary = 80000
    };
    // Output the values of an employee
    std::cout << "Employee: " << anEmployee.firstInitial <<
                                     anEmployee.lastInitial << std::endl;
    std::cout << "Number: " << anEmployee.employeeNumber << std::endl;                                     
    std::cout << "Salary: " << anEmployee.salary << std::endl;

    return EXIT_SUCCESS;
}