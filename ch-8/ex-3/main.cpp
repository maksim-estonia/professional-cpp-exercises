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

    // copy constructor
    Person(const Person& src) : m_firstName{src.m_firstName}, m_lastName{src.m_lastName} {
        std::cout << "Copy constructor" << std::endl;
        std::cout << "first name: " << m_firstName << std::endl;
        std::cout << "last name: " << m_lastName << std::endl;
    }
    Person& operator=(const Person& rhs) {
        std::cout << "Assignment operator" << std::endl;

        if (this != &rhs) {
            m_firstName = rhs.m_firstName;
            m_lastName = rhs.m_lastName;
        }

        std::cout << "first name: " << m_firstName << std::endl;
        std::cout << "last name: " << m_lastName << std::endl;
        return *this;
    }
    // destructor
    ~Person() {
        std::cout << "Destructor" << std::endl;
        std::cout << "first name: " << m_firstName << std::endl;
        std::cout << "last name: " << m_lastName << std::endl;
    }


};




int main() 
{
    // Person object on the stack
    Person person1 { "John", "Doe" };

    std::cout << "Now copy constructor should be called: " << std::endl;
    Person person1copy {person1};

    Person personnew;
    std::cout << "Now assignment operator should be called: " << std::endl;
    personnew = person1;


    std::cout << "Now destructor should be called:" << std::endl;
    return EXIT_SUCCESS;

}