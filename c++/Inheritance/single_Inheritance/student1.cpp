#include <iostream>
using namespace std;

class student
{
    int id;
    char sname[20];
    float total, per;

public:
    int marks;

    void adddata()
    {
        cout << "Enter Student id : ";
        cin >> id;

        cout << "enter Student name : ";
        cin >> sname;
    }

    void print()
    {
        cout << "Student id is : " << id << endl;
        cout << "Student name is : " << sname << endl;
    }

    void printdata()
    {
        cout << "Marks is : " << marks << endl;
    }
};

class data : public student
{
public:
    void addmore()
    {
        cout << "Enter Student Marks : ";
        cin >> marks;
    };
};

int main()
{
    data d1[3], d2;
    d2.adddata();

    for (int i = 0; i < 3; i++)
    {
        d1[i].addmore();
    }
    
    

    cout << endl;
    d2.print();

    for (int i = 0; i < 3; i++)
    {
        d1[i].printdata();
    }

    return 0;
}