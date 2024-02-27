#include <iostream>
using namespace std;

class bank
{
    long long int accountNo;

    string name;
    int balance;
    

public:
    int id_;
    int option, option1 = 1, option2 = 2, option3 = 3, option4 = 4, option5 = 0;
    int addmoney;
    char y;
    char a = 'y';

    bank(){}

    bank(long long int accountNo,string name, int balance)
    {

    }
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

};

int main()
{

    bank acc[4];

    acc[0]=bank{45671000101234,"Ajay patel",50000};
    acc[1]=bank{45671000104567,"Meet Desai ",25000};
    acc[2]=bank{13221000107894,"Raj Goti",10000};
    acc[3]=bank{45671000107412,"Yash Sharma",40000};

    
  

    
    return 0;
}


// DRY -> do not repeat yourself