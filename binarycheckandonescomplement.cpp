#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read();
    void chkbin();
    void onescomp();
};
void binary::read()
{
    cout << "Enter A binary Number: " << endl;
    cin >> s;
}
void binary::chkbin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number" << endl;
        }
    }

    cout << "Correct Binary Number" << endl;
}

void binary ::onescomp()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else //(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
    cout << "ones complement is: " << s << endl;
}
int main()
{
    binary b;
    b.read();
    b.chkbin();
    b.onescomp();
}