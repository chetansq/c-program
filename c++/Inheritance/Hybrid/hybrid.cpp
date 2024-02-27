#include <iostream>
using namespace std;

class student
{
public:
    int id;

    void sid()
    {
        cout << "Enter student id  :";
        cin >> id;
    }
};

class name
{
public:
    string sname;
    void stdname()
    {
        cout << "Enter Student name : ";
        cin >> sname;
    }
};

class marks : public name
{
public:
    int mark[3];

    void smark()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks : ";
            cin >> mark[i];
        }
    }
};

class per : public marks, public student
{
public:
    float total, perc;

    void stotal()
    {
        total = mark[0] + mark[1] + mark[2];

        perc = (total / 300) * 100;
    }

    void print()
    {
        cout << "Student id : " << id << endl;
        cout << "Student name: " << sname << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "Student Marks : " << mark[i] << endl;
        }
        cout << "Percentage  : " << perc << endl;
    }
};

int main()
{
    per p1;

    p1.sid();
    p1.stdname();
    p1.smark();
    p1.stotal();

    cout << endl;
    p1.print();

    return 0;
}