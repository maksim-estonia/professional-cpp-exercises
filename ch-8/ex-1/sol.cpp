#include <string>
#include <memory>
#include <iostream>

class Person
{
private:
    std::string m_firstName;
    std::string m_lastName;
public:
    Person(const std::string& firstName, const std::string& lastName):
        m_firstName{ firstName }, m_lastName{ lastName } {}
    
    const std::string& getFirstName() const { return m_firstName; }
    void setFirstName(const std::string& firstName) { m_firstName = firstName; }

    const std::string& getLastName() const { return m_lastName; }
    void setLastName(const std::string& lastName) { m_lastName = lastName; }
};

int main()
{
    // On the stack
    Person person1{ "John", "Doe" };
    std::cout << person1.getFirstName() << ", " << person1.getLastName() << std::endl;

    auto person2{ std::make_unique<Person>("Marc", "Gregoire") };
    std::cout << person2->getFirstName() << ", " << person2->getLastName() << std::endl;
}