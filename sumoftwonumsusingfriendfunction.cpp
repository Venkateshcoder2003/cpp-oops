#include <iostream>
using namespace std;
class B; // FORWARD DECLARATION

class A
{

    int a;

public:
    void setA()
    {
        cout << "Enter A: " << endl;
        cin >> a;
    }
    friend void add(A, B);
};
class B
{
    int b;

public:
    void setB()
    {
        cout << "Enter B: " << endl;
        cin >> b;
    }
    friend void add(A, B);
};
void add(A object_1, B object_2)
{
    cout << "The Sum Of two Numbers Is: " << object_1.a + object_2.b << endl;
}

int main()
{
    A object_1;
    B object_2;
    object_1.setA();
    object_2.setB();
    add(object_1, object_2);
}