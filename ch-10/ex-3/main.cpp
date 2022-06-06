#include "HR.cpp"
#include <iostream>
#include <vector>
#include <memory>

int main()
{
    std::vector<std::unique_ptr<HR::Person>> personArray;

    personArray.push_back(std::make_unique<HR::Employee>(1, "John", "Doe", "JD"));
    personArray.push_back(std::make_unique<HR::Manager>(2, "Tom", "Coppens", "TC"));
    personArray.push_back(std::make_unique<HR::Director>(3, "Toon", "Bynens", "TB"));

    for (const auto& person : personArray)
    {
        person->getString();
    }

    return EXIT_SUCCESS;
}