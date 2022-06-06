#include "HR.cpp"
#include <iostream>
#include <vector>

int main()
{
    HR::Manager myManager{1, "John", "Doe", "JD"};

    HR::Director myDirector{2, "Jane", "Doe", "JD"};

    myManager.getString();

    myDirector.getString();

    return EXIT_SUCCESS;
}