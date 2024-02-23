#include <iostream>
using namespace std;

class student
{
    int std_id;
    char std_name[20];
    int marks[3];
    float total, per;

public:
    void std_data()
    {
        cout << "Enter Student ID : ";
        cin >> std_id;

        cout << "Enter Student Name : ";
        cin >> std_name;

        for (int i = 0; i < 3; i++)
        {

            cout << "Enter student Marks : ";
            cin >> marks[i];
        }

        total = marks[0] + marks[1] + marks[2];

        per = (total / 300) * 100;
    }

    void print_data()
    {

        cout << " Studet Id : " << std_id << endl;
        cout << " Studet Name : " << std_name << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << " Studet Marks : " << marks[i] << endl;
        }

        cout << " Total : " << total << endl;
        cout << " Percentage :  " << per << endl;
    }
};

int main()
{
    student std[2];

    for (int i = 0; i < 2; i++)
    {
        std[i].std_data();
         cout << endl;
        std[i].print_data();
        cout << endl;
    }

    return 0;
}
