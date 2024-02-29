#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter Your ID : ";
        cin >> id;
        cout << endl;
        count++;
    }

    void printdata()
    {
        cout << "Your id is : " << id << endl;
    }

    static void staticword()
    {
        cout << "Count No is : " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee raj, rohan, ravi;

    raj.setData();
    raj.printdata();
    raj.staticword();

    rohan.setData();
    rohan.printdata();
    Employee ::staticword();

    ravi.setData();
    ravi.printdata();
    Employee ::staticword();

    return 0;
}