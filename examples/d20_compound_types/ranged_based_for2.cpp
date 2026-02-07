#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

struct Student
{
    int id;
    std::string name;
};

void printStudents(const std::vector<Student> &);
void printStudent(const Student &);

int main()
{
    std::vector<Student> study_group {
        { 1010, "Jane Dough" },
        { 1092, "John Buck" },
        { 1003, "Fiona Faughn" },
        { 1014, "Kyle Kidd" },
        { 1075, "Franny Phillie" }
    };

    printStudents(study_group);

    return 0;
}

void printStudent(const Student & student)
{
    // since student is const, this function cannot modify it
    std::cout << student.id 
              << " " << std::left << std::setw(20) << student.name 
              << " " << &student << " " << &student.name << std::endl;
}

void printStudents(const std::vector<Student> & students)
{
    // Since students is const, any reference to an 
    // element needs to be const, too.
    for (const auto & s: students)
    {
        printStudent(s);
    }

    std::cout << std::endl;

    // But here, s2 is not a reference, so it is a copy 
    // of each element in students
    for (auto s2: students)
    {
        printStudent(s2);
    }
}
