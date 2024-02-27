#include <iostream>
using namespace std;

class base
{
public:
    int a, b;

    void adddata(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
};

class sum : public base
{
public:
    void sunnumber()
    {
        cout << "Sum of a + b : " << a + b << endl;
    }
};

class multi : public base
{
public:
    void multiNumber()
    {
        cout << "Multiplication of a * b : " << a * b << endl;
    }
};

int main()
{
    sum obj1;
    multi obj2;

    obj1.adddata(10,20);
    obj2.adddata(10,20);

    obj1.sunnumber();
    obj2.multiNumber();
    return 0;
}