#include <iostream>
using namespace std;

class nameid
{
protected:
    int id;
    char name[20];

public:
    void std_name()
    {
        cout << "Enter Student Id : ";
        cin >> id;
        cout << "Enter Student Name : ";
        cin >> name;
    }

    void print_name()
    {
        cout << "Student ID is : " << id << endl;
        cout << "Student Name is : " << name << endl;
    }
};

class marks : public nameid
{
protected:
    int marks[3];

public:
    void std_marks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter Marks : ";
            cin >> marks[i];
        }
    }

    void print_marks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Marks is : " << marks[i] << endl;
        }
    }
};

class per : public marks
{
protected:
    float total, per;

public:
    void std_per()
    {
        total = marks[0] + marks[1] + marks[2];

        per = (total / 300) * 100;
    }

    void prit_per()
    {
        cout << "Per is : " << per << endl;
    }
};

int main()
{
    per p1;

    p1.std_name();
    p1.std_marks();
    p1.std_per();

    cout << endl;

    p1.print_name();
    p1.print_marks();
    p1.prit_per();
    return 0;
}