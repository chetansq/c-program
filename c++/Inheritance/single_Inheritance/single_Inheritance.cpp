#include <iostream>
using namespace std;

class base
{
    int salary;

public:
    int bonus;
    int total;

    void addsalary(int salary1)
    {
        salary = salary1;
    }

    void print()
    {
        cout << "Salary is : " << salary << endl;
        cout << "bonus is : " << bonus << endl;
    }

    void totalsalary()
    {
        total = salary + bonus;

        cout << "Total Salary is : " << total;
    }
};

class derive : public base
{
public:
    void addbonus(int bonus1)
    {
        bonus = bonus1;
    }
};

int main()
{
    derive s1;
    s1.addbonus(500);
    s1.addsalary(1000);
    s1.print();
    cout<<"-----------"<<endl;
    s1.totalsalary();
   
    return 0;
}