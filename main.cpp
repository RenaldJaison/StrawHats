#include <iostream>
using namespace std;

class Attendance
{
    string subject;
    int totalStu;
    int presentStu;
    float p;

public:
    Attendance()
    {
        totalStu = 65;
        p = 0;
    }

    void MarkAttendance()
    {
        cout << "Enter the number of students present out of " << totalStu << ": ";
        cin >> presentStu;

        if (presentStu < 0 || presentStu > totalStu)
        {
            cout << "Invalid number of students!" << endl;
            exit(0);
        }
    }

    void CalAttenPercentage()
    {
        p = (presentStu / (float)totalStu) * 100;

        cout << "Attendance Percentage: " << p << "%" << endl;
    }

    void CheckAtten()
    {
        if (p >= 75.0)
        {
            cout << "Attendance Percentage: " << p
                 << "%. You are Eligible." << endl;
        }
        else
        {
            cout << "Attendance Percentage: " << p
                 << "%. You are Not Eligible!" << endl;
        }
    }
};

int main()
{
    Attendance a;

    a.MarkAttendance();
    a.CalAttenPercentage();
    a.CheckAtten();

    return 0;
}
