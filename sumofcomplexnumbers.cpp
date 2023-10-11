#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void complexsum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printComplex()
    {
        cout << "The Complex Number Is: " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printComplex();

    c2.setData(3, 4);
    c2.printComplex();

    c3.complexsum(c1, c2);
    c3.printComplex();
}