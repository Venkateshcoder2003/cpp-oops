// constructer
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
        name = s;
        age = a;
        gender = g;
    }
    void printinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "--------------------------------------------------" << endl;
    }
};

int main()
{
    student a("venki ", 21, 1);
    student b("venki", 20, 1);

    a.printinfo();
    b.printinfo();
}
