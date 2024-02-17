#include <iostream>
using namespace std;

class Deploy
{
    int a, b;

public:
    Deploy();

    void printData()
    {
        cout << "value a is :" << a << endl;
        cout << "value b is :" << b << endl;
    }
};

Deploy ::Deploy()
{
    a = 10;
    b = 0;
}
int main()
{

    Deploy data;

    data.printData();

    return 0;
}