#include <iostream>
#include <string>
#include <memory>

class Person
{
private:
    std::string m_firstName{"NONAME"};
    std::string m_lastName{"NONAME"};
    std::string m_initials{"NN"};
public:
    Person() = default;
    Person(const std::string& firstName, const std::string& lastName, const std::string& initials):
        m_firstName{firstName}, m_lastName{lastName}, m_initials{initials} {}
    Person(const std::string& firstName, const std::string& lastName) : 
        m_firstName{firstName}, m_lastName{lastName} {
            m_initials.at(0) = firstName.at(0);
            m_initials.at(1) = lastName.at(0);
        }

    const std::string& getFirstName() const { return m_firstName; }
    const std::string& getLastName() const { return m_lastName; }
    const std::string& getInitials() const { return m_initials; }

    void setFirstName(const std::string& firstName) { m_firstName = firstName; }
    void setLastName(const std::string& lastName) { m_lastName = lastName; }
    void setInitials(const std::string& initials) { m_initials = initials; }

};






int main() 
{
    // Person object on the stack
    Person person1 { "John", "Doe" };

    std::cout << "first name: " << person1.getFirstName() << std::endl;
    std::cout << "last name: " << person1.getLastName() << std::endl;
    std::cout << "initials: " << person1.getInitials() << std::endl;
    
    return EXIT_SUCCESS;

}