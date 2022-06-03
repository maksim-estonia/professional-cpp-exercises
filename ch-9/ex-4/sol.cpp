#include "Person.hpp"
#include "iostream"

using namespace std;

int main()
{
    Person person { "John", "Doe" };
    std::cout << person.getFirstName() << ", " << person.getLastName() << ", " << person.getInitials() << std::endl;

    Person persons[3];

    // Test copy constructor
    Person copy {person};

    // Test assignment operator
    Person otherPerson {"Jane", "Doe"};
    copy = otherPerson;

    // Test move construction
    Person moved{move(copy)};

    // Test move assignment operator
    Person moved2;
    moved2 = move(otherPerson);

}