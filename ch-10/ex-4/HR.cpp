#include <string>
#include <iostream>

namespace HR
{
    class Person
    {
    private:
        std::string m_firstName;
        std::string m_lastName;
        std::string m_initials;
    public:
        Person() = default;

        Person(std::string firstName, std::string lastName, std::string initials)
            : m_firstName{ std::move(firstName) }
            , m_lastName{ std::move(lastName) }
            , m_initials{ std::move(initials) }
        {}

     	const std::string& getFirstName() const { return m_firstName; }
    	void setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

    	const std::string& getLastName() const { return m_lastName; }
    	void setLastName(std::string lastName) { m_lastName = std::move(lastName); }

    	const std::string& getInitials() const { return m_initials; }
    	void setInitials(std::string initials) { m_initials = std::move(initials); }

        virtual void getString() const {}  

    };

    class Employee : public Person 
    {
        private:
            int m_employeeId;
        public:

            Employee(int id, std::string firstName, std::string lastName, std::string initials)
                : HR::Person{ std::move(firstName), std::move(lastName), std::move(initials) }
                , m_employeeId{ id }
            {}

            virtual int getID() const { return m_employeeId; }
            virtual void setID(int id) { m_employeeId = id; }

            void getString() const override {
                std::cout << "Employee ID: " << getID() << std::endl;
                std::cout << "First name: " << getFirstName() << std::endl;
                std::cout << "Last name: " << getLastName() << std::endl;
                std::cout << "Initials: " << getInitials() << std::endl;
            }
    };

    class Manager : public Employee
    {
        public:
            using Employee::Employee;

            // Constructor to convert from Employee to Manager
            Manager(const HR::Employee& employee)
                : HR::Employee{ employee }
            {}

            void getString() const override {
                std::cout << "Manager: " << std::endl;
                HR::Employee::getString();
            }
    };

    class Director : public Employee
    {
        public:
            // Explicitly inherit Employee's constructors
            using Employee::Employee;

            void getString() const override {
                std::cout << "Director: " << std::endl;
                HR::Employee::getString();
            }
    };
}    

