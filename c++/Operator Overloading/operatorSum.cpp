#include <iostream>
using namespace std;

class arith_num
{
    int x, y;

public:
    arith_num()
    {
        x = 0;
        y = 0;

        // cout << "enter value of a : ";
        // cin >> a;
    }

    arith_num(int a, int b)
    {
        x = a;
        y = b;
        // cout << "enter value of b : ";
        // cin >> b;
    }

    void print(int a)
    {
        cout << "the " << a << " value of x is : " << x << endl;
        cout << "the " << a << " value of y is : " << y << endl;
    }

    arith_num operator+(arith_num obj)
    {
        arith_num A;

        A.x = x + obj.x;
        A.y = y + obj.y;

        return A;
    }
};

int main()
{

    arith_num a, b, c;

    a = arith_num(10, 20);
    b = arith_num(0,40);

    // cout << "the value of a " << endl;
    a.print(1);
    cout << endl;
    // cout << "the value of b  " << endl;
    b.print(2);
    cout << endl;
    c = a + b;
    // cout << "total " << endl;
    c.print(3);
    return 0;
}