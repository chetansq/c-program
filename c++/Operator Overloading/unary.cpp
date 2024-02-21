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

    // arith_num operator--(int)
    // {
    //     x--;
    //     y--;
    // }
    void print()
    {
        cout << "value of X : " << x << " value of Y :" << y;
    }

    // void print1()
    // {
    //     cout << "value of X : " << x << " value of Y :" << y;
    // }
};

int main()

{
    arith_num x1(2, 4);
    // arith_num y1(1, 2);
    -x1;
    // y1--;
    x1.print();
    cout << endl;
    // y1.print1();
    return 0;
}
