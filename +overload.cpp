#include <iostream>
#include <string.h>

using namespace std;

class Test
{
    string str;

public:
    void read()
    {
        cout << "Enter a String: " << endl;
        getline(cin, str);
    }
    void show()
    {
        cout << "String: " << str << endl;
    }
    Test operator+(Test t2)
    {
        Test t3;
        t3.str = this->str + " " + t2.str;
        return t3;
    }
};
int main()
{
    Test t1, t2, t3;
    t1.read();
    t2.read();

    t3 = t1 + t2;
    t3.show();
    return 0;
}