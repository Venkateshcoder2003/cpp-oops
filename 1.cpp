#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number(void)
{

    cout << "Your  Roll Number Is : " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks(void)
{
    cout << "The marks Scored In Maths Are : " << maths << endl;
    cout << "The marks Scored In Physics Are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {

        get_roll_number();
        get_marks();
        cout << "The Percemtage Is : " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result obj;
    obj.set_roll_number(420);
    obj.set_marks(90, 90);
    obj.display();
}
