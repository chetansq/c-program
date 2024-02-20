#include <iostream>
using namespace std;

class arith_num
{
    int a, b;

public:
    void input()
    {
        cout << "enter value of a : ";
        cin >> a;
    }
    void input(int x)
    {
        cout << "enter " << x << " value of b : ";
        cin >> b;
    }

    arith_num operator+(arith_num obj)
    {
        arith_num A;
        A.a = a + obj.a;
        A.b = b + obj.b;
        return (A);
    }

    void print(int x)
    {
        cout << "the " << x << " value of A is : " << a << endl;
    }
    void print1(int y)
    {

        cout << "the " << y << " value of B is : " << b << endl;
    }
};


int main()
{

    arith_num a, b, c, d, e, f;

    a.input();
    b.input();

    c.input(1);
    d.input(1);

    e = a + b;
    f = c + d;

    e.print(2);
    f.print1(3);

    return 0;
}