#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

    friend complex comp(complex o1, complex o2);

public:
    complex(){};

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Your number is : " << a << " " << b << endl;
    }
};

complex comp(complex o1, complex o2)
{
    complex sum;

    sum.a = o1.a + o2.a;
    sum.b = o1.b + o2.b;
    return sum;
}

int main()
{
    complex sum1(20, 30), sum2(10, 20);

    sum1.print();
    sum2.print();

    complex c;
    cout << "----------------------" << endl;
    c = comp(sum1, sum2);
    c.print();

    return 0;
}