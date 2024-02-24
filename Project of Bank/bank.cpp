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

            cout << "welcome !\n"
                 << endl;

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

            switch (option)
            {
            case 1:
                cout << "Id  : " << id1 << endl;
                cout << "Name : " << name1 << endl;
                cout << "balance is : " << salary1_ajay << endl;
                break;

            case 2:
                cout << "Id  : " << id2 << endl;
                cout << "Name : " << name2 << endl;
                cout << "balance is : " << salary2_meet << endl;
                break;

            case 3:
                cout << "Id  : " << id3 << endl;
                cout << "Name : " << name3 << endl;
                cout << "balance is : " << salary3_raj << endl;
                break;

            case 4:
                cout << "Id  : " << id4 << endl;
                cout << "Name : " << name4 << endl;
                cout << "balance is : " << salary4_aman << endl;
                break;

            case 5:
            cout<<"THANK YOU !";
                break;

            default:
                break;
            }

            break;

        case 1002:
            if (id2 == id_)
            {
                // cout << "Id is : " << id2 << endl;
                // cout << "Nsame is : " << name2 << endl;
                // cout << "balance is : " << salary2_meet << endl;
            }
            else
            {
                cout << "not ";
            }

            
            break;

        case 1003:
            if (id3 == id_)
            {
                // cout << "Id is : " << id3 << endl;
                // cout << "Nsame is : " << name3 << endl;
                // cout << "balance is : " << salary3_raj << endl;
            }
            else
            {
                cout << "not ";
            }
            break;

        case 1004:
            if (id4 == id_)
            {
                // cout << "Id is : " << id4 << endl;
                // cout << "Nsame is : " << name4 << endl;
                // cout << "balance is : " << salary4_aman << endl;
            }
            else
            {
                cout << "not ";
            }
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