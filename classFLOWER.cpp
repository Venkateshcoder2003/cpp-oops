
#include <iostream>
#include <string>
using namespace std;

class FLOWER
{
private:
    string name;
    string colour;
    int price;

public:
    void set_data();
    void get_data();
    void check_data();
};

void FLOWER::set_data()
{
    cout << "Enter Name Of Flower: \n";
    cin >> name;
    cout << "Enter Colour Of Flower: \n";
    cin >> colour;
    cout << "Enter Price Of Flower: \n";
    cin >> price;
}

void FLOWER::get_data()
{
    cout << "Name: " << name << "\n"
         << "Colour: " << colour << "\n"
         << "Price: " << price << endl;
}

void FLOWER::check_data()
{
    if (price > 25)
    {
        cout << "Flower with price greater than Rupees 25:\n";
        get_data();
    }
}

int main()
{
    int n;
    cout << "Enter NUmber Of Flowers: \n";
    cin >> n;
    FLOWER f[n];

    for (int i = 0; i < n; i++)
    {
        f[i].set_data();
    }

    for (int i = 0; i < n; i++)
    {
        f[i].get_data();
    }

    cout << "Flowers Whose Price Is Greater Than Rupees 25 are: " << endl;

    for (int i = 0; i < n; i++)
    {
        f[i].check_data();
    }

    return 0;
}
