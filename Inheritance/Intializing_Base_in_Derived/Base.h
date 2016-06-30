#include <string>
class Person
{
public:
    std::string m_strName;
    int m_nAge;
    bool m_bIsMale;
 
    std::string GetName() { return m_strName; }
    int GetAge() { return m_nAge; }
    bool IsMale() { return m_bIsMale; }
 
    Person(std::string strName = "", int nAge = 0, bool bIsMale = false)
        : m_strName(strName), m_nAge(nAge), m_bIsMale(bIsMale)
    {
    }
};

// BaseballPlayer publicly inheriting Person
class BaseballPlayer : public Person
{
public:
    double m_dBattingAverage;
    int m_nHomeRuns;
 
    BaseballPlayer(std::string strName = "", int nAge = 0, bool bIsMale = false,
        double dBattingAverage = 0.0, int nHomeRuns = 0)
        : Person(strName, nAge, bIsMale), // call Person(std::string, int, bool) to initialize these fields
            m_dBattingAverage(dBattingAverage), m_nHomeRuns(nHomeRuns)
    {
    }
};

// Employee publicly inherits from Person
class Employee: public Person
{
public:
    std::string m_strEmployerName;
    double m_dHourlySalary;
    long m_lEmployeeID;
 
    Employee(std::string strEmployerName, double dHourlySalary, long lEmployeeID)
        : m_strEmployerName(strEmployerName), m_dHourlySalary(dHourlySalary),
            m_lEmployeeID(lEmployeeID)
    {
    }
 
    double GetHourlySalary() { return m_dHourlySalary; }
    void PrintNameAndSalary()
    {
        std::cout << m_strName << ": " << m_dHourlySalary << std::endl;
    }
};

class Supervisor: public Employee
{
public:
    // This Supervisor can oversee a max of 5 employees
    long m_nOverseesIDs[5];
};