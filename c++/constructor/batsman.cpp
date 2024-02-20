#include <iostream>
using namespace std;

class batsman
{
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;

    void calcavg();

public:
    batsman();

    
    void displaydata()
    {
        cout << " bcode : "<<bcode<<endl;;
        cout << " name : "<<bname<<endl;
        cout << " inninsg : "<<innings<<endl;
        cout << " notout : "<<notout<<endl;
        cout << " runs : "<<runs<<endl; 

        calcavg();   
    }
};

void batsman :: calcavg()
{
    batavg=runs/(innings - notout);
    cout<<"bat average : "<<batavg<<endl;
}

batsman ::batsman()
{
    cout << "enter bcode : ";
    cin >> bcode;

    cout << "enter name : ";
    cin >> bname;

    cout << "enter innings : ";
    cin >> innings;

    cout << "enter notout : ";
    cin >> notout;

    cout << "enter runs : ";
    cin >> runs;
}

int main()
{
    batsman bat;
    bat.displaydata();

    return 0;
}