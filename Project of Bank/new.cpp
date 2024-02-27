#include <iostream>
using namespace std;

class bank
{
    long long int accountNo;

    string name;
    int balance;

public:
    bank() {}

    bank(long long int accountNo, string name, int balance)
    {
         cout << "AC NO : " << accountNo << endl;
        cout << "AC Holder : " << name << endl;
        cout << "Balance : " << balance << endl;
    }

    void print()
    {
        cout << "AC NO : " << accountNo << endl;
        cout << "AC Holder : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{

    bank acc[4], b1;

    acc[0] = bank{45671000101234, "Ajay patel", 50000};
    acc[1] = bank{45671000104567, "Meet Desai ", 25000};
    acc[2] = bank{13221000107894, "Raj Goti", 10000};
    acc[3] = bank{45671000107412, "Yash Sharma", 40000};
    

    int option;

    int num;
    cout << "Enter Number : ";
    cin >> num;

    if (4 > num > 0)
    {
        cout << "PLEASE ! SELECT A OPTION : \n"
             << endl;
        cout << "1. Account information " << endl
             << endl;
        cout << "2.  Add Money" << endl
             << endl;
        cout << "3.  Withdraw " << endl
             << endl;
        cout << "4.  check balance" << endl
             << endl;
        cout << "5. EXIT ! " << endl
             << endl;
        cin >> option;


        switch (option)
        {
        case 1:
               b1.print();
              
            break;

        case 2:

            break;

        case 3:

            break;
        case 4:

            break;
        }
    }

    return 0;
}

// DRY -> do not repeat yourself