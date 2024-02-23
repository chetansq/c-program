#include <iostream>
using namespace std;

class emp
{
    int emp_id;
    char emp_name[20];
    int m1, m2, m3;
    float total_salary;

public:
    void emp_data()
    {
        cout << "Enter Employee Id : ";
        cin >> emp_id;
        cout << "Enter Employee Name : ";
        cin >> emp_name;
        cout << "Enter Employee Salary of Month : ";
        cin >> m1;
        cout << "Enter Employee Salary of Month : ";
        cin >> m2;
        cout << "Enter Employee Salary of Month : ";
        cin >> m3;

        total_salary = m1 + m2 + m3;
    }

    void print_data()
    {
        cout << "Enter Employee Id : " << emp_id << endl;
        cout << "Enter Employee Name : " << emp_name << endl;
        cout << "Enter Employee Salary of Month : " << m1 << endl;
        cout << "Enter Employee Salary of Month : " << m2 << endl;
        cout << "Enter Employee Salary of Month : " << m3 << endl;
        cout << "Enter Employee Total Salary : " << total_salary << endl;
    }
};

int main()
{
    emp e1[2];

    for (int i = 0; i < 2; i++)
    {
        e1[i].emp_data();
        e1[i].print_data();
        cout << endl;
    }
    return 0;
}
