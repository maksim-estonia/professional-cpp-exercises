namespace HR
{
    enum class level { Manager, SeniorEngineer, Engineer };

    struct Employee
    {
        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
        level title;
    };
} // namespace HR




