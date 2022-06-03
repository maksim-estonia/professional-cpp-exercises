#include "Person.hpp"

// Person::Impl class definition
class Person::Impl
{
private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_initials = {"NN"};
public:
    Impl(std::string firstName, std::string lastName);
    Impl() = default;
    Impl(std::string firstName, std::string lastName, std::string initials);

    const std::string& getFirstName() const;
    void setFirstName(std::string firstName);

    const std::string& getLastName() const;
    void setLastName(std::string lastName);

    const std::string& getInitials() const;
    void setInitials(std::string initials);
};

// Person::Impl class method definitions

Person::Impl::Impl(std::string firstName, std::string lastName)
{
    m_firstName = std::move(firstName);
    m_lastName = std::move(lastName);
    m_initials.at(0) = m_firstName.at(0);
    m_initials.at(1) = m_lastName.at(0);
}

Person::Impl::Impl(std::string firstName, std::string lastName, std::string initials)
    : m_firstName{ std::move(firstName) }
    , m_lastName{ std::move(lastName) }
    , m_initials{ std::move(initials) }
{}

const std::string& Person::Impl::getFirstName() const { return m_firstName; }
void Person::Impl::setFirstName(std::string firstName) { m_firstName = std::move(firstName); }

const std::string& Person::Impl::getLastName() const { return m_lastName; }
void Person::Impl::setLastName(std::string lastName) { m_lastName = std::move(lastName); }

const std::string& Person::Impl::getInitials() const { return m_initials; }
void Person::Impl::setInitials(std::string initials) { m_initials = std::move(initials); }

// Person class method definitions

Person::Person(std::string firstName, std::string lastName)
    : m_impl{ std::make_unique<Impl>(std::move(firstName), std::move(lastName)) }
    {}

Person::Person(std::string firstName, std::string lastName, std::string initials)
    : m_impl{ std::make_unique<Impl>(std::move(firstName), std::move(lastName), std::move(initials)) }
    {}

Person::Person()
    : m_impl{ std::make_unique<Impl>() }
    {}

Person::~Person() = default;
Person::Person(Person&&) noexcept = default;
Person& Person::operator=(Person&&) noexcept = default;

Person::Person(const Person& src)
    : m_impl{ std::make_unique<Impl>(*src.m_impl) }
    {}

Person& Person::operator=(const Person& rhs)
{
    *m_impl = *rhs.m_impl;
    return *this;
}

const std::string& Person::getFirstName() const { return m_impl->getFirstName(); }
void Person::setFirstName(std::string firstName) { m_impl->setFirstName(std::move(firstName)); }

const std::string& Person::getLastName() const { return m_impl->getLastName(); }
void Person::setLastName(std::string lastName) { m_impl->setLastName(std::move(lastName)); }

const std::string& Person::getInitials() const { return m_impl->getInitials(); }
void Person::setInitials(std::string initials) { m_impl->setInitials(std::move(initials)); }
