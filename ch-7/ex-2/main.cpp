#include <iostream>
#include <memory>

using namespace std;

int main()
{
    const size_t numberOfElements{ 10 };
    array<int, numberOfElements> values {};

    // Set values to their index value.
    for (int index{ 0 }; index < values.size(); ++index) {
        values.at(index) = index;
    }

    // Set last value to 99
    values.at(values.size()-1) = 99;

    // Print all values
    for (int index{ 0 }; index < values.size(); ++index) {
        cout << values.at(index) << " ";
    }
}