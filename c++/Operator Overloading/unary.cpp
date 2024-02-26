#include <iostream>
using namespace std;

class arith_num
{
    int x, y;

public:
    arith_num(int a, int b)
    {
        x = a;
        y = b;
    }

    arith_num operator-()
    {
        x--;
        y--;
    }

    void print()
    {
        cout << "value of X : " << x << " value of Y :" << y;
    }

    // arith_num operator--(int)
    // {
    //     x--;
    //     y--;
    // }

    // void print1()
    // {
    //     cout << "value of X : " << x << " value of Y :" << y;
    // }
};

int main()

{

    // arith_num y1(1, 2);

    // y1--;
    // y1.print1();

    arith_num x1(2, 4);
    -x1;
    x1.print();
    cout << endl;

    return 0;
}
