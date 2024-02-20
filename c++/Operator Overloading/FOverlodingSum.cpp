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
    void input()
    {
        cout << "enter value of b : ";
        cin >> b;
    }

    arith_num operator+(arith_num obj)
    {
        arith_num A;
        A.a = a + obj.a;
        A.b = b + obj.b;
        return (A);
    }

    void print()
    {
        cout << "the value of A is : " << a << endl;
        cout << "the value of B is : " << b << endl;
    }
    
};


int main()
{

    arith_num a, b, c;

    a.input();
    b.input();

    c = a + b;

    c.print();

    return 0;
}