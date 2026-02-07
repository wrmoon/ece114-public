#include <iostream>
#include <vector>
#include "student04.h"

void topGPA_example();

int main()
{
    std::cout << "const example" << std::endl;
    const Student jdoe {"Jane", "Doe", "jdoe27@college.edu", "U-24601"};
    jdoe.printInfo();
    std::cout << std::endl;

    /* const */ Student pp {"Pete", "Peters"," ppeters99@college.edu" , "U-999987"};
    pp.setLastName("Peterson");
    jdoe.printInfo();

    topGPA_example();
    std::cout << "Done" << std::endl;
    return 0;
}

void topGPA_example()
{
    std::vector<Student> students {
        {"Jane", "Doe", "jdoe27@college.edu", "U-24601"},
        {"Pete", "Peters"," ppeters99@college.edu" , "U-999987"},
        {"Hanna", "Smith"," hbobanna@college.edu" , "U-123987"}
    };
    for (auto & student : students)
    {
        student.addGrade(90);
        student.addGrade(80);
    }
    students[0].addGrade(10); // jane gets a 10
    students[1].addGrade(50); // pete gets a 50
    students[2].addGrade(80); // hanna gets an 80

    // find out the student with the highest GPA - via client
    // set pointer to first student
    const Student * highestGPAStudent = &students[0];
    for (auto & student : students)
    {
        if (highestGPAStudent->getGPA() < student.getGPA())
        {
            highestGPAStudent = &student;
        }
    }
    // print out the student with the highest GPA
    std::cout << "student with highest GPA: ";
    highestGPAStudent->printInfo();
    

    // find out the student with the highest GPA - via topGPA()
    // set pointer to first student to start with
    const Student * highestGPA = &students[0];
    for (auto & student : students)
    {
        // topGPA() returns a const reference
        highestGPA = &highestGPA->topGPA(student);
    }
    // print out the student with the highest GPA
    std::cout << "student with highest GPA: ";
    highestGPA->printInfo();
}

