#include <iostream>
using namespace std;

class arith_num
{
    int a, b;

public:
    void data()
    {
        cout << "enter data of a : ";
        cin >> a;

        cout << "enter data of b : ";
        cin >> b;
    }

    void print()
    {
        cout << "data of a : " << a << endl
             << "data of b : " << b << endl;
    }
};

int main()
{

    arith_num a1[3];

    for (int i = 0; i < 3; i++)
    {
        a1[i].data();
        a1[i].print();
        
        cout << endl;
    }
    return 0;
}