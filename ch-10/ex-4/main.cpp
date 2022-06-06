#include "HR.cpp"
#include <iostream>
#include <vector>
#include <memory>

int main()
{
    HR::Employee employee{ 1, "John", "Doe", "JD" };
    employee.getString();

    // Promote employee to manager
    HR::Manager manager{ employee };
    manager.getString();
    employee.getString();

    return EXIT_SUCCESS;
}