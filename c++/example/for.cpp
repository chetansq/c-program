#include<iostream>

using namespace std;

int main()
{
//     for(int i=10; i>=1; i--)
//     {
//         cout<<i<<"\t";
//     }
// cout<<endl;
// int n;
// cout<<"enter n =";
// cin>>n;

//      for(int i=1; i<=n; i++)
//     {
//         cout<<i<<"\t";
//     }
//     cout<<endl;

//      for(int i=-n; i<=n; i++)
//     {
//         cout<<i<<"\t";
//     }


for(int i=1; i<=5; i++)
{
    for(int j=1; j<=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    return 0;
}