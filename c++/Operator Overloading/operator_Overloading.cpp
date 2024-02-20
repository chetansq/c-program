#include <iostream>
using namespace std;

class arith_num
{
    int a;

public:
    void input()
    {
        cout << "enter value of a : ";
        cin >> a;
    }

    arith_num operator+(arith_num obj)
    {
        arith_num A;
        A.a = a + obj.a;
        return (A);
    }

    void print()
    {
        cout << "the value of A is : " << a << endl;
    }
};

int main()
{

    arith_num a,b,c;

    a.input();
    b.input();
    c = a + b;

    c.print();

    return 0;
}