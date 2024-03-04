#include <iostream>
using namespace std;

class bank
{
    int id;
    long long int accountNo;
    string name;
    int balance;

public:
    int amount;
    int id2;
    bank() {}

    bank(int id1, long long int accountNo1, string name1, int balance1)
    {
        id = id1;
        accountNo = accountNo1;
        name = name1;
        balance = balance1;
    }

    // || *************** add money **************** ||

    void deposit()
    {
        cout << endl
             << endl;
        cout << "Confirm id Code : ";
        cin >> id2;

        if (id == id2)
        {
            cout << endl
                 << endl;
            cout << "enter amount : ";
            cin >> amount;

            balance = balance + amount;
            cout << endl;
            cout << "Deposite Amount is : " << amount;
            cout << endl;
            cout << endl;

            print();
        }
        else
        {
            cout << "Not Match !";
        }
    }

    // || *************** Withdraw *************** ||

    void withdraw()
    {
        cout << endl
             << endl;
        cout << "Confirm id Code : ";
        cin >> id2;

        if (id == id2)
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
        else
        {
            cout << "Not Match !";
        }
    }
// || ************** Transaction *************** ||

    void Transaction(bank &temp, double amount)
    {
        balance -= amount;
        temp.balance += amount;

        cout<<"transfer Amount : "<<amount;
        cout<<endl<<endl;
        print();
    }
    // || ************** Print data *************** ||

    void print()
    {
        cout << "ID : " << id << endl;
        cout << "AC NO : " << accountNo << endl;
        cout << "AC Holder : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main()
{
    bank acc[6], b1;

    acc[1] = bank{1001, 45671000101234, "Ajay patel", 50000};
    acc[2] = bank{1002, 45671000104567, "Meet Desai ", 25000};
    acc[3] = bank{1003, 13221000107894, "Raj Goti", 10000};
    acc[4] = bank{1004, 45671000107412, "Yash Sharma", 40000};
    acc[5] = bank{1005, 99671000107411, "Rohit Sharma", 47000};

    int option;
    char y;
    // char y1 = 'y';
    // char y2 = 'n';
    int num;
    int amount1;

restart:
    // cout<<"Dop You Want to Exit (Press = 0) : "<<endl<<endl;
    cout << "Enter Number : "; // set snumber for limit
    cin >> num;

    if (num == 0)
    {
        goto exit;
    }
    else if (num > 5)
    {
        cout << "Not Account Avilabel ";
    }
    else
    {

    start:
        cout << endl;
        cout << "PLEASE ! SELECT A OPTION : \n"
             << endl;
        cout << "1. Account information " << endl
             << endl;
        cout << "2.  Add Money " << endl
             << endl;
        cout << "3.  Withdraw " << endl
             << endl;
        cout << "4.  Transaction " << endl
             << endl;
        cout << "5. EXIT ! " << endl
             << endl;
        cin >> option;

        if (option < 6)
        {
            switch (option)
            {
            case 1:
                cout << "Your Account Information : ";
                cout << endl
                     << endl;
                for (int i = 1; i < 6; i++)
                {
                    if (i == num)
                        acc[i].print();
                }
                cout << endl;
            s:
                cout << "you want to countinue (y='1'/n='0') : ";
                cin >> y;

                if (y=1)
                {
                    goto start;
                }
                else if (y=0)
                {
                    goto end;
                }
                else
                {
                    cout << endl
                         << endl;
                    cout << "Not Match !, please enter 'y' or 'n' \n";
                    goto s;
                }
                break;

            case 2:
                cout << "Deposite Money : ";
                for (int i = 1; i < 6; i++)
                {
                    if (i == num)
                    {
                        acc[i].deposit();
                    }
                }
                cout << endl;
                s2:
                cout << "you want to countinue (y='1'/n='0') : ";
                cin >> y;

                if (y=1)
                {
                    goto start;
                }
               else if (y = 0)
                {
                    goto end;
                }
                else
                {
                    cout << endl
                         << endl;
                    cout << "Not Match !, please enter 'y' or 'n' "<<endl;
                    goto s2;
                }
                break;

            case 3:
                cout << "Withdraw Money : ";
                for (int i = 1; i < 6; i++)
                {
                    if (i == num)
                    {
                        acc[i].withdraw();
                    }
                }
                cout << endl;
                s3:
                cout << "you want to countinue (y='1'/n='0') : ";
                cin >> y;
                getchar();
                if (y = 1)
                {
                    goto start;
                }
                else if (y = 0)
                {
                    goto end;
                }
                else
                {
                    cout << endl
                         << endl;
                    cout << "Not Match !, please enter 'y' or 'n' ";
                    goto s3;
                }
                break;

            case 4:
                int num1;
                cout << "Transaction : ";

                cout<<endl<<endl;
                for (int i = 1; i < 6; i++)
                {
                    if (i == num)
                    {
                        cout << "Enter NO for transfer : ";
                        cin >> num1;
                        cout << "Enter The Amount : ";
                        cin >> amount1;

                        cout << "you want to countinue for transfer (y='1'/n='0') : ";
                        cin >> y;
                        if (y = 1)
                        {
                            acc[i].Transaction(acc[num1], amount1);
                        }
                        else
                        {
                            goto end;
                        }
                    }
                }
                cout << endl;
                s4:
                cout << "you want to countinue (y='1'/n='0') : ";
                cin >> y;

                if (y = 1)
                {
                    goto start;
                }
                else if (y = 0)
                {
                    goto end;
                }
                else
                {
                    cout << endl
                         << endl;
                    cout << "Not Match !, please enter 'y' or 'n' ";
                    goto s4;
                }
                break;

            default:
                break;
            }
        }
        else
        {
            cout << "Sorry,Option Not Match " << endl;
        }
    }
end:
    cout << "Thank you !";
    cout << endl
         << endl;

    cout << "************************************************\n"
         << endl;
    cout << "           Your Session is Complete !  \n"
         << endl;
    cout << "************************************************";
    cout << endl
         << endl;
    goto restart;

exit:
    cout << endl
         << endl;
    cout << "Thank you !";
    cout << endl
         << endl;
    return 0;
}


// complete !
// DRY -> do not repeat yourself

// void Transaction(bank &temp, double amount)
// {
//     balance -= amount;
//     temp.balance += amount;
// }