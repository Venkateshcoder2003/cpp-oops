#include <iostream>
using namespace std;

int count = 0;
class Num
{
public:
    Num()
    {
        count++;
        cout << "This Is The Time When Constructor Is Called For Object Number " << count << endl;
        cout << "-------------------------------------------------------------------------" << endl;
    }
    ~Num()
    {
        cout << "This Is The Time When my Destructor Is Called For Object Number " << count << endl;
        count--;
        cout << "-------------------------------------------------------------------------" << endl;
    }
};
int main()
{
    cout << "We Are Inside Our Main Function" << endl;
    cout << "Creating First Object n1" << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    Num n1;
    {
        cout << "Entering This Block Inside Our Mian Function" << endl;
        cout << "Creating Two More Object n2 And n3" << endl;
        Num n2, n3;
        cout << "Exiting This Block" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
    }
    cout << "Back To Main Function " << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    return 0;
}