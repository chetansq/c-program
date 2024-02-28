// Virtual and pure virtual function

#include <iostream>
using namespace std;

class base
{
public:
    // create absrtract class for pure virtual function
    int a = 10;
    virtual void display()=0;
    // {

    //     cout << "The value of a is : " << a << endl;
    // }
};

class derive : public base
{
public:
    int b = 20;
    void display()
    {
        cout << "The value of b is : " << b << endl;
    }
};

int main()
{
    base *obj1;
    derive obj2;

    obj1 = &obj2;

    obj1->display();
    return 0;
}