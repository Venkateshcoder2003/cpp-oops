#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructer" << endl;
    }
    student(string s, int a, int g)
    {
        cout << "Parametarized Constructer" << endl;
        name = s;
        age = a;
        gender = g;
    }
    student(student &a)
    {
        cout << "Copy Constructer" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // destructer
    ~student()
    {
        cout << "Destructer Called" << endl;
    }
};

int main()
{

    student a("venki", 21, 1);
    student b;
    student c = a; // student c(a);

    if (c == a)
    {
        cout << "SAME " << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
}