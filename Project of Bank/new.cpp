// #include <iostream>
// using namespace std;

// class bank
// {
//     long long int accountNo;

//     string name;
//     int balance;

// public:
//     bank() {}

//     bank(long long int accountNo, string name, int balance)
//     {
//     }

//     void print()
//     {
//         cout << "AC NO : " << accountNo << endl;
//         cout << "AC Holder : " << name << endl;
//         cout << "Balance : " << balance << endl;
//     }

//     void match(int option)
//     {

//         cout << "PLEASE ! SELECT A OPTION : \n"
//              << endl;
//         cout << "1. Account information " << endl
//              << endl;
//         cout << "2.  Add Money" << endl
//              << endl;
//         cout << "3.  Withdraw " << endl
//              << endl;
//         cout << "4.  check balance" << endl
//              << endl;
//         cout << "5. EXIT ! " << endl
//              << endl;
//         cin >> option;
//     }
// };

// int main()
// {

//     bank acc[4], b1;

//     acc[0] = bank{45671000101234, "Ajay patel", 50000};
//     acc[1] = bank{45671000104567, "Meet Desai ", 25000};
//     acc[2] = bank{13221000107894, "Raj Goti", 10000};
//     acc[3] = bank{45671000107412, "Yash Sharma", 40000};

//     int option;
//     b1.match(option);

//     int num;
//     cout << "Enter Number : ";
//     cin >> num;

//     switch (num)
//     {
//     case 0:

//         break;

//     case 1:
//         break;

//     case 2:

//         break;

//     case 3:

//         break;
//     }

//     return 0;
// }

// // DRY -> do not repeat yourself

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
    // long long int accountNo1;
    int id2;
    bank() {}

    bank(int id1, long long int accountNo1, string name1, int balance1)
    {
        id = id1;
        accountNo = accountNo1;
        name = name1;
        balance = balance1;
    }

    // *************** add money ****************

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

    // *************** Withdraw ****************

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

    // void transaction()
    // {
    //     cout << "Enter your accoutnt Number : ";
    //     cin >> accountNo1;

    //     cout << "Enter Another AC NO for transaction : ";
    //     cin >> accountNo;

    // }

    // *************** Print data ****************

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

    bank acc[5], b1;

    acc[1] = bank{1001, 45671000101234, "Ajay patel", 50000};
    acc[2] = bank{1002, 45671000104567, "Meet Desai ", 25000};
    acc[3] = bank{1003, 13221000107894, "Raj Goti", 10000};
    acc[4] = bank{1004, 45671000107412, "Yash Sharma", 40000};

    int option;
    char y;
    char y1 = 'y';
    int num;

restart:
    cout << "Enter Number : "; // set snumber for limit
    cin >> num;

    if (num == 0)
    {
        goto exit;
    }

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

    switch (option)
    {
    case 1:
    
        cout << "Your Account Information : ";
        cout << endl
             << endl;
        for (int i = 1; i < 5; i++)
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
        cout << "Deposite Money : ";
        for (int i = 1; i < 5; i++)
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
        cout << "Withdraw Money : ";
        for (int i = 1; i < 5; i++)
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

        // case 4:
        //     cout << "Transaction : ";

        //     for (int i = 0; i < 4; i++)
        //     {
        //         if (i == num)
        //         {
        //             acc[i].transaction();
        //         }
        //     }
        //     cout << endl;
        //     cout << "you want to countinue (y/n) : ";
        //     cin >> y;

        //     if (y1 == y)
        //     {
        //         goto start;
        //     }
        //     else
        //     {
        //         goto end;
        //     }
        //     break;

    default:
        // cout << "thank you  !";
        break;
    }
end:
    cout << "Thank you !";
    cout << endl
         << endl;

    cout << "*******************************************" << endl;
    cout << "      Your Session is Complete ! " << endl;
    cout << "*******************************************";
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

// DRY -> do not repeat yourself