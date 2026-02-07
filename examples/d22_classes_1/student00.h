#ifndef STUDENT00_H
#define STUDENT00_H

#include <vector>
#include <string>

class Student // class declaration
{
private:
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string id;
    double gpa;
    std::vector<int> grades;
    void updateGPA();

public:
    void setUp(std::string first, std::string last, 
        std::string email, std::string id);
    void addGrade(int grade);
    void printInfo();
}; // note the semicolon
#endif
