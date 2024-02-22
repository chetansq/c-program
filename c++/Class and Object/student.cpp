#include <iostream>
using namespace std;

class student
{

     private:  //without declare "private" ,it is also take private mamber
    int admno;
    char sname[20];
    float eng, math, science;
    float total;
    float ctotal();
public:
    void takeData()
    {
        cout<<"enter the admno :";
        cin>>admno;

        cout<<"enter the sname :";
        cin>>sname;

        cout<<"enter the eng :";
        cin>>eng;

        cout<<"enter the math :";
        cin>>math;

        cout<<"enter the science :";
        cin>>science;
        
    }
    
    void showData()
    {
        cout << "admno :" << admno << endl;
        cout << "sname :" << sname << endl;
        cout << "eng :" << eng << endl;
        cout << "math :" << math << endl;
        cout << "science :" << science << endl;  
        ctotal();
       
    }
};

float student :: ctotal()
    {
        total =eng+math+science;
         cout<<"total is :"<<total<<endl; 

    }
// void student ::takeData()
// {
//     admno ;
//     sname;
//     eng ;
//     math ;
//     science ;
// }

int main()
{
    student std;

    std.takeData();
    std.showData();
    // std.ctotal();

    return 0;
}