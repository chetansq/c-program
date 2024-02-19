#include <iostream>
using namespace std;

void sum(double a, int v)
{
    cout << a + v << endl;
}
void sum(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    sum(10.55, 20);
    sum(10, 20);

    return 0;
}