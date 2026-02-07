#ifndef STUDENT04_H
#define STUDENT04_H

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
    ~Student();
    Student(std::string first, std::string last, 
        std::string email, std::string id);
    void addGrade(int grade);
    void printInfo() const;

    const Student & topGPA(const Student & other) const;

    // getters
    double getGPA() const { return m_gpa; }
    std::string getFirstName() const { return m_firstName; }
    std::string getLastName() const { return m_lastName; }
    std::string getEmail() const { return m_email; }
    std::string getId() const { return m_id; }

    // setters
    void setFirstName(std::string first) { m_firstName = first; }
    void setLastName(std::string last) { m_lastName = last; }
    void setEmail(std::string email) { m_email = email; }

}; // note the semicolon
#endif
