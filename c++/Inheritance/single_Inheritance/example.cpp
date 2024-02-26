#include <iostream>
using namespace std;

class base
{
    int id;
    
public:
    char name[10];
    int phone;

    void ename()
    {

        cout << "Enter Id : ";
        cin >> id;

        cout << "Enter Name : ";
        cin >> name;
    }

    void printdata()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
        cout << "Phone Number : " << phone << endl;
        
    }
};

class derive : public base
{   
    int pincode;
    int pincode1;
    public:

    void phonedata()
    {   
        cout<<"Enter Phone Numbner : ";
        cin>>phone;

        cout<<"enter pincode No : ";
        cin>>pincode;
        
        cout<<"enter pincode No : ";
        cin>>pincode1;
        
    }
    void print()
    {

    cout<<"PIncode : "<<pincode<<endl;
    cout<<"PIncode : "<<pincode1<<endl;
    }
};

int main()
{
    derive d1;

    d1.ename();
    d1.phonedata();
    d1.printdata();
    d1.print();
    return 0;
}



