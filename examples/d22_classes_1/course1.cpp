#include "student01.h"

int main()
{
    Student student("Jane", "Doe", "jdoe27@college.edu", "U-24601");
    student.addGrade(90);
    student.addGrade(80);
    student.addGrade(77);
    student.addGrade(65);
    student.addGrade(85);
    student.printInfo();

    Student noah;

    return 0;
}




