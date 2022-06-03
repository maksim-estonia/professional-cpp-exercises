#include <iostream>
#include <string>
#include <memory>

class Person
{
private:
    std::string m_firstName{"NONAME"};
    std::string m_lastName{"NONAME"};
public:
    Person() = default;
    Person(const std::string& firstName, const std::string& lastName) : 
        m_firstName{firstName}, m_lastName{lastName} {}

    const std::string& getFirstName() const { return m_firstName; }
    const std::string& getLastName() const { return m_lastName; }

    void setFirstName(const std::string& firstName) { m_firstName = firstName; }
    void setLastName(const std::string& lastName) { m_lastName = lastName; }
};




int main() 
{
    // Person object on the stack
    Person person1 { "John", "Doe" };
    // Person object on the heap
    auto person2 { std::make_unique<Person>("Maria", "Doe")};

    // Print out person 1
    std::cout << "Person 1:" << std::endl;
    std::cout << "first name: " << person1.getFirstName() << std::endl;
    std::cout << "last name: " << person1.getLastName() << std::endl;
    // Print out person 2
    std::cout << "Person 2:" << std::endl;
    std::cout << "first name: " << person2->getFirstName() << std::endl;
    std::cout << "last name: " << person2->getLastName() << std::endl;

    Person phonebook[3];

    std::cout << phonebook[0].getFirstName() << ", " << phonebook[0].getLastName() << std::endl;

    return EXIT_SUCCESS;

}