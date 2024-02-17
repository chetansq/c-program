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

    // void readdata();
    void displaydata()
    {
        cout << " bcode : "<<bcode<<endl;;
        cout << " name : "<<bname<<endl;
        cout << " inninsg : "<<innings<<endl;
        cout << " notout : "<<notout<<endl;
        cout << " runs : "<<runs<<endl;    
    }
};

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

    return 0;
}