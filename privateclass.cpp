

;

// private attributes
#include <iostream>
using namespace std;

class student
{
    string name;
    int age;

public:
    bool gender;

    void setName(string N) // this type of function we call as setter function
    {
        name = N;
    }
    void setAge(int A)
    {
        age = A;
    }

    void printinfo()
    {

        cout << "Name= " << name << endl;
        cout << "Age= " << age << endl;
        cout << "gender " << gender << endl;
        cout << "-------------------------------------------" << endl;
    }
};

int main()
{
    student arr[3];

    for (int i = 0; i < 3; i++)
    {
        string N;
        int A;
        cout << "Name: " << endl;
        cin >> N;
        arr[i].setName(N);
        cout << "Age: " << endl;
        cin >> A;
        arr[i].setAge(A);
        cout << "Gender: " << endl;
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printinfo();
    }
}
