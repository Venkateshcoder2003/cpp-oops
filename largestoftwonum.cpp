#include <iostream>
using namespace std;

class largest
{
    int num1, num2, max; // 3 attributes
public:
    void setData()
    {
        cout << "Enter Number 1: " << endl;
        cin >> num1;
        cout << "Enter Number 2: " << endl;
        cin >> num2;
    }
    friend void find_max(largest);
};
void find_max(largest l)
{
    if (l.num1 > l.num2)
    {
        l.max = l.num1;
    }
    else
    {
        l.max = l.num2;
    }
    cout << "The largest Number is: " << l.max << endl;
}

int main()
{
    largest l;
    l.setData();
    find_max(l); // find_max is a friend function and it not belongs to class (largest),so we
    // call find_max function as a normal function but argument for that function is must be a object
}