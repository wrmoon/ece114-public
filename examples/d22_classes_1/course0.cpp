#include "student00.h"

//void ctor_example()
int main()
{
    Student student;
    /*
    student.setUp("Jane", "Doe", "jdoe27@college.edu", "U-24601");
    student.addGrade(90);
    student.addGrade(80);
    student.addGrade(77);
    student.addGrade(65);
    student.addGrade(85);
    */
    student.printInfo();

    /*
    Student john;
    john.setUp("John", "Dough", "jdoe99@college.edu", "U-2411111");
    john.addGrade(40);
    john.addGrade(100);
    john.addGrade(100);
    john.printInfo();

    Student * jake = new Student();
    jake->setUp("Jake", "Smith", "alskdfjlasdk@asdfa.com", "21111");

*/

    //std::cout << student.lastName << std::endl;
    //ctor_example();
    return 0;
}


/*
void ctor_example()
{
    Student jane;
    jane.printInfo();
}

void ctor_example2()
{
    int year {2023};                    // valid initialization
    struct Thing
    {
        char* part_name;
        int part_number;
    };

    Thing amabob { "widget27", 100127 }; // valid initialization

    // NO! Compile error
    // Student jane {"Jane", "Doe", "jdoe27@college.edu", "U-24601"};
}
*/
