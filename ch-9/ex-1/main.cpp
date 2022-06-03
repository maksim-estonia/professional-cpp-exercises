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
    Person(std::string firstName, std::string lastName) : 
        m_firstName{std::move(firstName)}, m_lastName{std::move(lastName)} {}

    const std::string& getFirstName() const { return m_firstName; }
    const std::string& getLastName() const { return m_lastName; }

    void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }
    void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

    // move constructor
    Person(const Person& src) : m_firstName{src.m_firstName}, m_lastName{src.m_lastName} {
        std::cout << "move constructor" << std::endl;
    }
    // move assignment
    Person& operator=(const Person& rhs) {
        std::cout << "move assignment" << std::endl;

        Person temp { std::move(rhs) };
        swap(temp);
        return *this;
    }
    // destructor
    ~Person() {
        std::cout << "Destructor" << std::endl;
    }
    // swap
    void swap(Person& other) noexcept
    {
        std::cout << "Swap" << std::endl;
        std::swap(m_firstName, other.m_firstName);
        std::swap(m_lastName, other.m_lastName);
    }
};




int main() 
{
    // Person object on the stack
    Person person1 { "John", "Doe" };

    std::cout << "Now Move constructor should be called: " << std::endl;
    Person person2constr {person1};

    Person person2move;
    std::cout << "Now move assignment operator should be called: " << std::endl;
    person2move = person1;


    std::cout << "Now destructor should be called:" << std::endl;
    return EXIT_SUCCESS;

}