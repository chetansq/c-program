#include <iostream>
using namespace std;

int main()

{
    // int m1, m2, m3;
    // float total, per;

    // cout << "enter M1 :";
    // cin >> m1;
    // cout << "enter M2 :";
    // cin >> m2;
    // cout << "enter M3 :";
    // cin >> m3;
    // total = m1 + m2 + m3;

    // cout << "total is :" << total<<endl;

    // per = (total / 300) * 100;

    // cout << "per is :" << per;
    
    int marks[3];
    float total,per;
    for(int i=0; i<3; i++)
    {
        cout<<"enter marks :";
        cin>>marks[i];
    }

    total =marks[0] + marks[1] + marks[2];

    per=(total/300)*100;

    for(int j=0;j<3; j++)
    {
        cout<<"marks :"<<marks[j]<<endl;
    }
    
    cout<<"total is :"<<total;
    cout<<"per is :"<<per;
    return 0;
}