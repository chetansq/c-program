#include <iostream>
using namespace std;

int main()

{
    int m1, m2, m3;
    float total, per;

    cout << "enter M1 :";
    cin >> m1;
    cout << "enter M2 :";
    cin >> m2;
    cout << "enter M3 :";
    cin >> m3;
    total = m1 + m2 + m3;

    cout << "total is :" << total<<endl;

    per = (total / 300) * 100;

    cout << "per is :" << per;
    return 0;
}