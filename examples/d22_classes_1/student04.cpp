#include <iostream>
#include <iomanip>
#include "student04.h"

Student::Student(std::string first, std::string last, std::string email_addr, std::string student_id)
: m_firstName {first}, m_lastName {last}, m_email {email_addr}, m_id {student_id}, m_gpa {0.0} 
{
    std::cout << "Student " << m_id 
              << " (" << m_lastName << ", " << m_firstName 
              << ") created. " << std::endl;
}

Student::~Student()
{
    std::cout << "Student destructor called for " << m_id 
              << " (" << m_lastName << ", " 
              << m_firstName << ")" << std::endl;
}

void Student::addGrade(int grade) 
{ 
    m_grades.push_back(grade); 
    updateGPA();
    std::cout << "Grade " << grade << " added to student " << m_id << ". "
              << "GPA is now " << std::fixed << std::setprecision(2) 
              << m_gpa << std::endl;
}

void Student::updateGPA()
{
    double sum {};
    for (auto grade : m_grades)
    {
        sum += grade;
    }
    m_gpa  = ((sum / m_grades.size()) - 50.0)/ 10.0;
    m_gpa = (m_gpa > 4.0) ? 4.0 : m_gpa;
    m_gpa = (m_gpa < 0.0) ? 0.0 : m_gpa;
}

void Student::printInfo() const
{
    using namespace std;
    cout << m_id << ": "
         << m_lastName << ", " << m_firstName << " "
         << "(" << m_email << ")  "
         << "GPA: " << fixed << setprecision(2) << getGPA() 
         << " Num grades: " << m_grades.size() 
         << endl;
}

const Student & Student::topGPA(const Student & other) const
{
    if (m_gpa > other.m_gpa)
        return *this;
    else
        return other;
}
