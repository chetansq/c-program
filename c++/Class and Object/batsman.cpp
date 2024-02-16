#include <iostream>
using namespace std;

class batsman
{

private:
    int bcode;
    char bname[20];
    int innings, notout, runs;
    float batavg;

    void calavg();

public:

 
    void readdata()
    {
        cout << "enter bcode :";
        cin >> bcode;

        cout << "enter name :";
        cin >> bname;

        cout << "innings :";
        cin >> innings;

        cout << "notout :";
        cin >> notout;

        cout << "runs :";
        cin >> runs;
    }

    // void calcavg()
    // {
    //     batavg = runs / (innings - notout);
    //     cout << "batavg :" << batavg;
    // }

    void displaydata()
    {
        cout << endl;
        cout << "bcode :" << bcode << endl;
        cout << "name :" << bname << endl;
        cout << "innings :" << innings << endl;
        cout << "notout :" << notout << endl;
        cout << "runs :" << runs << endl;
        calavg();
    }

};

void  batsman ::calavg()
{
    float batavg;

    batavg = runs / (innings - notout);
    cout << batavg;
}

int main()
{
    batsman bat;

    bat.readdata();
    bat.displaydata();
    // bat.calcavg();

    return 0;
}