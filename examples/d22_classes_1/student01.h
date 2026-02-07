#ifndef STUDENT01_H
#define STUDENT01_H

#include <vector>
#include <string>

class Student // class declaration
{
private:
    std::string m_firstName;
    std::string m_lastName;
    std::string m_email;
    std::string m_id;
    double m_gpa;
    std::vector<int> m_grades;
    void updateGPA();

public:
    Student(std::string first, std::string last, 
        std::string email, std::string id);
    void addGrade(int grade);
    void printInfo();
}; // note the semicolon
#endif
