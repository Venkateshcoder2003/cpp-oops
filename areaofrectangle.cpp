#include <iostream>
using namespace std;

class rectangle
{
public:
    double length;
    double breadth;

    rectangle(double l, double b)
    {
        length = l;
        breadth = b;
    }
    double calculateArea()
    {
        return length * breadth;
    }
};
int main()
{
    rectangle rect1(3, 5); // we can also input the arguments from user
    rectangle rect2(10, 20);

    cout << "Area Of rectangle 1: " << rect1.calculateArea()
         << endl;
    cout << "Area Of rectangle 2: " << rect1.calculateArea()
         << endl;
}
