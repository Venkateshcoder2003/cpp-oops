#include <iostream>
using namespace std;

int RAM = 0, GEN = 0, SSD = 0;
string PROCESSOR = " ", WINDOWS = " n";

class victus_1
{
    string processor;
    string windows;

    // These Are Private Methods And Can't Be Inherited Directly
    void setProcessor_1();
    void setWindows_1();

public:
    int ram;
    int ssd;
    int generation;

    int setRam();
    int setSsd();
    int setGeneration();
};

void victus_1::setProcessor_1()
{
    cout << "Enter Processor:" << endl;
    cin >> processor;
    PROCESSOR = processor;
}

void victus_1::setWindows_1()
{
    cout << "Enter Windows:" << endl;
    cin >> windows;
    WINDOWS = windows;
}

int victus_1::setRam()
{
    cout << "Enter Ram:" << endl;
    cin >> ram;
    RAM = ram;
}

int victus_1::setSsd()
{
    cout << "Enter SSD: " << endl;
    cin >> ssd;
    SSD = ssd;
}

int victus_1::setGeneration()
{
    cout << "Enter Generation:" << endl;
    cin >> generation;
    GEN = generation;
}

class victus_2 : public victus_1
{
    string processor;
    string windows;

    void setProcessor_2();
    void setWindows_2();

public:
    void display();
};

void victus_2::setProcessor_2()
{
    cout << "Enter Processor:" << endl;
    cin >> processor;
    PROCESSOR = processor;
}

void victus_2::setWindows_2()
{
    cout << "Enter Windows:" << endl;
    cin >> windows;
    WINDOWS = windows;
}

void victus_2::display()
{
    setProcessor_2();
    setWindows_2();
    cout << "The Processor Of Your New Laptop Is:" << PROCESSOR << endl;
    cout << "The Windows Of Your New Laptop Is:" << WINDOWS << endl;
    cout << "The Ram Of Your New Laptop Is:" << RAM << endl;
    cout << "The SSD Of Your New Laptop Is:" << SSD << endl;
    cout << "The Generation Of Your New Laptop Is:" << GEN << endl;
}

int main()
{
    victus_2 obj;
    obj.setRam();
    obj.setSsd();
    obj.setGeneration();
    obj.display();
}
