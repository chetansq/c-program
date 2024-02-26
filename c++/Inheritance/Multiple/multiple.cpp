#include <iostream>
using namespace std;

// with private

class A
{
    int id;

public:
    void id_A()
    {
        cout << "etner id From calss A :";
        cin >> id;
    }

    void print1()
    {
        cout << "id From class A: " << id << endl;
    }
};

class B
{
    int id;

public:
    void id_B()
    {
        cout << "etner id From calss B :";
        cin >> id;
    }

    void print2()
    {
        cout << "id From class B : " << id << endl;
    }
};

class C : public A, public B
{
    char name[20];

public:
    void n_C()
    {
        cout << "etner Name :";
        cin >> name;
    }

    void print()
    {
        cout << endl;
        print1();
        print2();
        cout << "Name is : " << name << endl;
    }
};
int main()
{

    C c1;
    c1.id_A();
    c1.id_B();
    c1.n_C();
    c1.print();
    return 0;
}