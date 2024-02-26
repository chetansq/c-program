#include<iostream>
using namespace std;

// with protected 

class base1
{
    protected:
    int a1;

    public:
    void setdata1(int x1)
    {
        a1=x1;
    }
};


class derive1 : public base1
{
    protected:
    int a2;

    public:
     
     void setdata2(int x2)
     {
        a2=x2;
     }
};


class derive2 : public derive1
{
    public :

    void show()
    {
        cout<<"enter value 1 : "<<a1<<endl;
        cout<<"enter value 2 : "<<a2<<endl;
        cout<<"sum of  : "<<a1 + a2<<endl;
    }    
};


int main()
{
    // derive1 d1;


    derive2 d2;
    
    d2.setdata2(20);
    d2.setdata1(10);

    d2.show();
    return 0;
}