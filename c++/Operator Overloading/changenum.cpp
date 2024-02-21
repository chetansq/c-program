#include <iostream>
using namespace std;

class number
{
    int a, b;

public:
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    number operator-()
    {
        a = -a;

        b = -b;
    }

    void print()
    {
        cout << "value a is : " << a << endl;
        cout << "value b is : " << b << endl;
    }
};

int main()
{
    number num(10, 20), num1(-3, -4);

    -num;
    -num1;
    num.print();
    num1.print();
    return 0;
}