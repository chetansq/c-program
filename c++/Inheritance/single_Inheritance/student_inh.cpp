#include <iostream>
using namespace std;

class stduent
{
    int id;

public:
    string name;

    void student_id(int id1)
    {
        id = id1;
    }

    void print()
    {
    cout<<"Student ID is : "<<id<<endl;
    cout<<"Student Name is : "<<name<<endl;

    }

};

class tech : public stduent
{

public:
    void sname(string name1)
    {
        name = name1;
    }
};

int main()
{
    tech star;
    star.student_id(1);
    star.sname("student");
    star.print();
    return 0;

}
