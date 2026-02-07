#include <iostream>
#include "student02.h"

int main()
{
    std::cout << "constructor example" << std::endl;
    Student jdoe ("Jane", "Doe", "jdoe27@college.edu", "U-24601");
    jdoe.addGrade(65);
    jdoe.addGrade(95);
    jdoe.printInfo();
    std::cout << std::endl;

    // using default constructor
    std::cout << "default constructor example" << std::endl;
    Student jsmith;
    jsmith.printInfo();
    std::cout << std::endl;

    // assignment
    std::cout << "assignment example #1" << std::endl;
    Student gstein;
    gstein = Student("Gertrude", "Stein", "gstein87@college.edu", "P-1267340");
    gstein.addGrade(95);
    gstein.printInfo();
    std::cout << std::endl;

    // assignment example 2 - notice how all was copied
    std::cout << "assignment example #2" << std::endl;
    Student s = gstein;
    s.addGrade(45);
    s.printInfo();
    gstein.printInfo();
    std::cout << std::endl;

    {
        std::cout << "extra temp obj and scope/destructor example" << std::endl;
        // notice extra temp object
        // notice destructor gets called when we leave scope
        Student glf = Student("Geordi", "LaForge", "glf.11@enterprise.ufp", "F-9983421");
        glf.printInfo();
        std::cout << std::endl;
    }

    /// universal initialization ({}) syntax 
    std::cout << "universal initialization example" << std::endl;
    Student ts {"Tony", "Stark", "tony_stark@.starkindustries.com", "F-99773322"};
    ts.printInfo();
    std::cout << std::endl;

    /// universal initialization ({}) syntax - default constructor
    std::cout << "universal initialization example #2" << std::endl;
    Student blank {};
    std::cout << std::endl;

    // using new and delete
    std::cout << "new and delete example" << std::endl;
    Student *ltd = new Student("", "Data", "data.01@enterprise.ufp", "F-981234757");
    ltd->printInfo();
    delete ltd;
    ltd = nullptr;
    std::cout << std::endl;

    #if 0
    const Student stable_genius {};
    stable_genius.printInfo();
    #endif

    std::cout << "Done" << std::endl;

    return 0;
}




