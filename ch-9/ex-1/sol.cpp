#include <string>
#include <iostream>

class Person
{
private:
    std::string m_firstName;
    std::string m_lastName;
public:
    Person(std::string firstName, std::string lastName)
        : m_firstName{ std::move(firstName) }, m_lastName{ std::move(lastName) } 
        {};
    
    Person() = default;

    // Copy constructor
    Person(const Person& src)
        : m_firstName{ src.m_firstName }, m_lastName{ src.m_lastName }
    {
        std::cout << "Person copy constructor called" << std::endl;
    }

    // Assignment operator
    //// Modified to use copy-and-swap to avoid code duplication
    Person& operator=(const Person& rhs)
    {
        std::cout << "Person assignment operator called" << std::endl;

        auto temp{ rhs };
        swap(temp);
        return *this;
    }

    // Destructor
    ~Person()
    {
        std::cout << "Person destructor called" << std::endl;
    }

    // Move constructor
    Person(Person&& src) noexcept
    {
        std::cout << "Person move constructor called" << std::endl;
        swap(src);
    }

    // swap method
    //// Added to avoid code duplication
    void swap(Person& other) noexcept
    {
        std::swap(m_firstName, other.m_firstName);
        std::swap(m_lastName, other.m_lastName);
    }

    const std::string& getFirstName() const { return m_firstName; }
    void setFirstName(std::string firstName) { m_firstName = std::move(firstName); } /// Pass by value and move

    const std::string& getLastName() const { return m_lastName; }
    void setLastName(std::string lastName) { m_lastName = std::move(lastName); } // Pass by value and move

};

int main()
{
    Person person { "John", "Doe" };
    std::cout << person.getFirstName() << ", " << person.getLastName() << std::endl;

    Person persons[3];

    // Test copy constructor
    Person copy{ person };

    std::cout << "---" << std::endl;

    // Test assignment operator
    Person otherPerson { "Jane", "Doe" };
    copy = otherPerson;

    std::cout << "---" << std::endl;

    // Test move construction
    Person movedToPerson{ std::move(copy) };

    std::cout << "---" << std::endl;

    // Test move assignment
    movedToPerson = std::move(person);

    std::cout << "---" << std::endl;


}
