#include <iostream>
using namespace std;

class bank
{
    long long int accountNo;
    string name;
    int balance;

public:
    int amount;
    bank() {}

    bank(long long int accountNo1, string name1, int balance1)
    {
        accountNo = accountNo1;
        name = name1;
        balance = balance1;
    }

    void deposit()
    {
        cout << "enter amount : ";
        cin >> amount;

        balance = balance + amount;
        cout << endl;
        cout << "Deposite Amount is : " << amount;
        cout << endl;
        cout << endl;

        print();
    }

    void withdraw()
    {
        cout << "enter amount : ";
        cin >> amount;

        balance = balance - amount;
        cout << endl;
        cout << "Withdraw Amount is : " << amount;
        cout << endl;
        cout << endl;
        print();
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
    char y;
    char y1 = 'y';
    int num;
    cout << "Enter Number : "; // set snumber for limit
    cin >> num;

start:
    cout << endl;
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
        cout << "Account Information : ";
        cout << endl
             << endl;
        for (int i = 0; i < 4; i++)
        {
            if (i == num)
                acc[i].print();
        }
        cout << endl;

        cout << "you want to countinue (y/n) : ";
        cin >> y;

        if (y1 == y)
        {

            goto start;
        }
        else
        {
            goto end;
        }
        break;

    case 2:

        for (int i = 0; i < 4; i++)
        {
            if (i == num)
            {
                acc[i].deposit();
            }
        }
        cout << endl;
        cout << "you want to countinue (y/n) : ";
        cin >> y;

        if (y1 == y)
        {
            goto start;
        }
        else
        {
            goto end;
        }
        break;

    case 3:
        for (int i = 0; i < 4; i++)
        {
            if (i == num)
            {
                acc[i].withdraw();
            }
        }
        cout << endl;
        cout << "you want to countinue (y/n) : ";
        cin >> y;

        if (y1 == y)
        {
            goto start;
        }
        else
        {
            goto end;
        }
        break;

    case 4:

        break;

    default:
        cout << "thank you  !";
        break;
    }
end:
    cout << "Thank you !";

    return 0;
}

// DRY -> do not repeat yourself