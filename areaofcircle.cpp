#include <iostream>
using namespace std;

class Circle
{
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }
    float areaofcircle()
    {
        cout << "Area Of Circle Is: " << 3.14 * radius * radius << " sq.units" << endl;
    }
};
int main()
{
    Circle circle_obj;
    float rad;
    cout << "Enter Radius: " << endl;
    cin >> rad;

    circle_obj.setRadius(rad);
    circle_obj.areaofcircle();
}