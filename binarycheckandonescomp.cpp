#include <iostream>
using namespace std;

class binary
{
    string num;

public:
    void setBin(string n)
    {
        num = n;
    }
    void check_bin()
    {
        for (int i = 0; i < num.length(); i++)
        {
            if (num.at(i) != '1' && num.at(i) != '0')
            {
                cout << "Incorrect Binary Number" << endl;
                exit(0);
            }
        }
    }
    friend void ones_complement(binary);
};

void ones_complement(binary bin_obj)
{
    for (int i = 0; i < bin_obj.num.length(); i++)
    {
        if (bin_obj.num.at(i) == '1')
        {
            bin_obj.num.at(i) = '0';
        }
        else
        {
            bin_obj.num.at(i) = '1';
        }
    }
    cout << "Ones Complement Of the binary  number is: " << bin_obj.num << endl;
}

int main()
{
    string binary_num;
    binary bin_obj; // creat a object
    cout << "Enter a Binary Number: " << endl;
    cin >> binary_num;

    bin_obj.setBin(binary_num);
    bin_obj.check_bin();

    ones_complement(bin_obj);
}