#include <string>
// old C way without a typedef
struct Student1
{
    std::string name;
    std::string id;
    int grade;
};

// old C way
typedef struct 
{
    std::string name;
    std::string id;
    int grade;
} Student2;

// C++ way
struct Student3
{
    std::string name;
    std::string id;
    int grade;
} ;

struct Student1 s1;
Student2 s2;
Student3 s3;
