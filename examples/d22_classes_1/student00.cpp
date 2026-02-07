#include <iostream>
#include <iomanip>
#include "student00.h"

void Student::setUp(std::string first, std::string last, std::string email_addr, std::string student_id)
{
    firstName = first;
    lastName = last;
    email = email_addr;
    id = student_id;
    std::cout << "Student " << id 
              << " (" << lastName << ", " << firstName 
              << ") created. " << std::endl;
}

void Student::addGrade(int grade) 
{ 
    grades.push_back(grade); 
    updateGPA();
    std::cout << "Grade " << grade << " added to student " << id << ". "
              << "GPA is now " << std::fixed << std::setprecision(2) 
              << gpa << std::endl;
}

void Student::updateGPA()
{
    double sum {};
    for (auto grade : grades)
    {
        sum += grade;
    }
    gpa  = ((sum / grades.size()) - 50.0)/ 10.0;
    gpa = (gpa > 4.0) ? 4.0 : gpa;
    gpa = (gpa < 0.0) ? 0.0 : gpa;
}

void Student::printInfo()
{
    using namespace std;
    cout << id << ": "
         << lastName << ", " << firstName << " "
         << "(" << email << ")  "
         << "GPA: " << fixed << setprecision(2) << gpa 
         << " Num grades: " << grades.size() 
         << endl;
}
