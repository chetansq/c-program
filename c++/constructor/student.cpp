#include <iostream>
using namespace std;

class student
{
private:
    int admno;
    char sname[20];

    float eng, math, science;
    float total;

    float ctotal();

public:
    student();

   
    void showdata()
    {
        cout << " Admin No : " << admno << endl;
        cout << " Student Name : " << sname << endl;
        cout << " English : " << eng << endl;
        cout << " Math : " << math << endl;
        cout << " Science : " << science << endl;

        float a;
        a = ctotal();
        cout << "total " << a << endl;
        float ctotal();
    }
};

float student ::ctotal()
{
    total = eng + math + science;
    return total;
};

student ::student()
{
    cout << "enter admno : ";
    cin >> admno;

    cout << "enter sname : ";
    cin >> sname;

    cout << "enter eng : ";
    cin >> eng;

    cout << "enter math : ";
    cin >> math;

    cout << "enter science : ";
    cin >> science;
}

int main()
{
    student std;

    std.showdata();

    return 0;
}