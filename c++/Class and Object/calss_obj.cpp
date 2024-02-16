#include <iostream>
using namespace std;

class student
{
private:
    int a, b, c;

public:
    int d, e;

    void setData(int a, int b, int c); // Declaration of private

    void printData()
    {
        cout<<"data a is :"<<a<<endl;
        cout<<"data b is :"<<b<<endl;
        cout<<"data c is :"<<c<<endl;
        cout<<"data d is :"<<d<<endl;
        cout<<"data e is :"<<e<<endl;
    }
};

void student :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    student students;
    
    students.d=10;
    students.e=20;

    students.setData(1,2,3);
    students.printData();
    return 0;
}