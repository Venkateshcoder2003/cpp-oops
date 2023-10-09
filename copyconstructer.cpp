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
};

int main()
{

    student a("venki", 21, 1);
    student b;
    student c = a; // student c(a);
}