#include <iostream>
using namespace std;

class complex
{

private:
    int a;
    int b;

public:
    friend complex sumNumber(complex o1, complex o2);

    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "Your number is : " << a << " + " << b << endl;
    }
};

complex sumNumber(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;

    c1.setNumber(1,4);
    c1.print();

    c2.setNumber(4,8);
    c2.print();

    cout<<"----------------------"<<endl;
    sum=sumNumber(c1,c2);
    sum.print();

    return 0;
}