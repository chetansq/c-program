#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    friend complex operator-(complex o1);

    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Your number is : " << a << " + " << b << endl;
    }
};

complex operator-(complex o1)
{

    //o1.a--;
    //o1.b--;
    return complex(o1.a--,o1.b--);
}

int main()
{
    complex sum1(-2, 3);

    -sum1;
    sum1.print();

    cout << "----------------------" << endl;
    return 0;
}