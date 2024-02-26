#include <iostream>
using namespace std;

class bank
{
    int id1 = 1001;
    int id2 = 1002;
    int id3 = 1003;
    int id4 = 1004;
    string name1 = "ajay", name2 = "meet", name3 = "raj", name4 = "aman";
    int salary1_ajay = 10000;
    int salary2_meet = 5000;
    int salary3_raj = 15000;
    int salary4_aman = 7500;

public:
    int id_;
    int option, option1 = 1, option2 = 2, option3 = 3, option4 = 4, option5 = 0;
    int addmoney;
    char y;
    char a = 'y';

    void match()
    {

        // cout << "welcome !\n"
        cout << endl;

        cout << "PLEASE ! SELECT A OPTION : \n"
             << endl;

        // Add information in the bnak account

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
    }

    void cal1()
    {
        salary1_ajay = salary1_ajay + addmoney;

        cout << "total Amount : " << salary1_ajay;
    }

    void cal2()
    {
        salary2_meet = salary2_meet + addmoney;

        cout << "total Amount : " << salary2_meet;
    }

    void cal3()
    {
        salary3_raj = salary3_raj + addmoney;

        cout << "total Amount : " << salary3_raj;
    }

    void cal4()
    {
        salary4_aman = salary4_aman + addmoney;

        cout << "total Amount : " << salary4_aman;
    }

    void func()
    {
        cout << "Enter your id : ";
        cin >> id_;

        switch (id_)
        {

        case 1001:
            if (id1 == id_)
            {

                // cout << "Id is : " << id1 << endl;
                cout << "WELCOME ! " << name1 << endl;
                cout << "balance is : " << salary1_ajay << endl;
            }
            else
            {
                cout << "not ";
            }

            match();

            switch (option)
            {
            case 1:

                cout << "your Account Information : " << endl
                     << endl;
                cout << "Id  : " << id1 << endl;
                cout << "Name : " << name1 << endl;
                cout << "balance is : " << salary1_ajay << endl;

                cout << "if you want continue (y/n) : " << endl;
                cin >> y;

                if (y == a)
                {
                    match();
                }
                else
                {
                    cout << "THANK YOU !";
                }
                break;

            case 2:

                cout << "Add Money : " << endl
                     << endl;

                cout << "Enter the amount as you want : " << endl
                     << endl;
                cin >> addmoney;

                cal1();

                cout << endl
                     << endl;
                cout << "if you want continue (y/n) : " << endl;
                cin >> y;

                if (y == a)
                {
                    match();
                }
                else
                {
                    cout << "THANK YOU !";
                }

                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                cout << "THANK YOU !";
                break;

            default:

                break;
            }

            break;

        case 1002:
            if (id2 == id_)
            {
                // cout << "Id is : " << id2 << endl;
                cout << "WELCOME !  " << name2 << endl;
                cout << "balance is : " << salary2_meet << endl;
            }
            else
            {
                cout << "not ";
            }

            match();

            switch (option)
            {
            case 1:
                cout << "Id  : " << id2 << endl;
                cout << "Name : " << name2 << endl;
                cout << "balance is : " << salary2_meet << endl;
                break;

            case 2:
                cout << "Add Money : " << endl
                     << endl;

                cout << "Enter the amount as you want : " << endl
                     << endl;
                cin >> addmoney;

                cal2();
                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                cout << "THANK YOU !";
                break;

            default:
                break;
            }

            break;

        case 1003:
            if (id3 == id_)
            {
                // cout << "Id is : " << id3 << endl;
                cout << "WELCOME ! " << name3 << endl;
                cout << "balance is : " << salary3_raj << endl;
            }
            else
            {
                cout << "not ";
            }

            match();

            switch (option)
            {
            case 1:
                cout << "Id  : " << id3 << endl;
                cout << "Name : " << name3 << endl;
                cout << "balance is : " << salary3_raj << endl;

            case 2:
                cout << "Add Money : " << endl
                     << endl;

                cout << "Enter the amount as you want : " << endl
                     << endl;
                cin >> addmoney;

                cal3();

                break;

            case 3:

                break;

            case 4:

                break;

            case 5:
                cout << "THANK YOU !";
                break;

            default:
                break;
            }

            break;
            break;

        case 1004:
            if (id4 == id_)
            {
                // cout << "Id is : " << id4 << endl;
                cout << "WELCOME ! " << name4 << endl;
                cout << "balance is : " << salary4_aman << endl;
            }
            else
            {
                cout << "not ";
            }

            match();

            switch (option)
            {
            case 1:

                cout << "Id  : " << id4 << endl;
                cout << "Name : " << name4 << endl;
                cout << "balance is : " << salary4_aman << endl;
                break;

            case 2:
                cout << "Add Money : " << endl
                     << endl;

                cout << "Enter the amount as you want : " << endl
                     << endl;
                cin >> addmoney;

                cal4();
            case 3:

                break;

            case 4:

                break;

            case 5:
                cout << "THANK YOU !";
                break;

            default:
                break;
            }

            break;
            break;

        default:
            cout << "not match!";
            break;
        }
    }
};

int main()
{

    bank acc;

    acc.func();
    return 0;
}