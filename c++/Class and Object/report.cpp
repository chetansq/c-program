#include <iostream>
using namespace std;

class report
{
private:
    int adno;
    char name[20];
    float marks[5];
    float average;

    void getavg();

public:
    void readinfo()
    {
        cout << "enter adno : ";
        cin >> adno;

        cout << "enter name : ";
        cin >> name;

        for (int i = 0; i < 5; i++)
        {
            cout << "enter marks : ";
            cin >> marks[i];
        }
    }

    void displayinfo()
    {
        cout << endl;
        cout << "admin number : " << adno << endl;
        cout << "name : " << name << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "marks : " << marks[i] << endl;
        }

        getavg();
    }
};

void report ::getavg()
{
    average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    cout << "Average is :" << average;
}

int main()
{
    report file;

    file.readinfo();
    file.displayinfo();

    return 0;
}