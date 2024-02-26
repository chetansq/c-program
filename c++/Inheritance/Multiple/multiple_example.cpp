#include <iostream>
using namespace std;

// with protected

class A
{
protected:
    int a1;

public:
    void id_A(int x1)
    {
        a1 = x1;
    }

};

class B
{
protected:
    int a2;

public:
    void id_B(int x2)
    {
        a2=x2;
    }

};

class C : public A, public B
{
    // char name[20];

public:

    void show()
    {
        cout << "a1 is : " << a1 << endl;
        cout << "a2 is : " << a2 << endl;
        cout << "total is : " << a1 + a2 << endl;
    }
};
int main()
{

    C c1;
   c1.id_A(10);
   c1.id_B(20);
    c1.show();
    return 0;
}