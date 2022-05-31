#include <string>


/**
 * @brief Datase class containing all former and current employees
 */
class Database
{
public:
    /**
     * @brief add new Employee
     * 
     * @param firstName 
     * @param lastName 
     * @return Employee& 
     */
    Employee& addEmployee(const std::string& firstName, 
                          const std::string& lastName);
    /**
     * @brief Get the Employee object
     * 
     * @param employeeNumber 
     * @return Employee& 
     */
    Employee& getEmployee(int employeeNumber);
    /**
     * @brief Get the Employee object
     * 
     * @param firstName 
     * @param lastName 
     * @return Employee& 
     */
    Employee& getEmployee(const std::string& firstName, 
                          const std::string& lastName);
    
    
};
