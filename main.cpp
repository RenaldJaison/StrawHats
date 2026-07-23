#include <iostream>
using namespace std;

class Sleeping_Stu
{
    string name;
    int rollNo;
    int energy;

public:
    Sleeping_Stu()
    {
        cout << "Enter Name : ";
        cin >> name;

        cout << "Enter Roll Number : ";
        cin >> rollNo;

        cout << "Enter Energy Level : ";
        cin >> energy;
    }

    void attendClass()
    {
        energy = energy - 20;
    }

    void drinkCoffee()
    {
        energy = energy + 25;
    }

    void sleep()
    {
        energy = 100;
    }

    void displayStatus()
    {
        cout << "Name : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Energy Level : " << energy << endl;

        if (energy > 0)
            cout << "Student survived three classes without sleeping." << endl;
        else
            cout << "Student fell asleep." << endl;
    }
};

int main()
{
    Sleeping_Stu s;

    s.sleep();
    s.attendClass();
    s.drinkCoffee();
    s.attendClass();
    s.attendClass();


    s.displayStatus();

    return 0;
}
