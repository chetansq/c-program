#include <iostream>
using namespace std;

class batsman
{

private:
    int bcode[4];
    char bname[20];
    int innings, notout, runs;
    float batavg;
    
    // void calavg()
    // {
    //     batavg =runs/(innings - notout);

    // }

public:

    void readdata()
    {
        cout << "enter name :";
        cin >> bname;

        cout << "innings :";
        cin >> innings;

        cout << "notout :";
        cin >> notout;

        cout << "runs :";
        cin >> runs;
    }

    float calcavg()
    {
        batavg = runs / (innings - notout);
        cout << "batavg :" << batavg;
    }

    void displaydata()
    {

        cout << "name :" << bname << endl;
        cout << "innings :" << innings << endl;
        cout << "notout :" << notout << endl;
        cout << "runs :" << runs << endl;
    }

};

// void batsman ::calcavg()
// {
//     batavg = runs / (innings - notout);
//     cout << batavg;
// }

int main()
{
    batsman bat;

    bat.readdata();
    bat.displaydata();
    bat.calcavg();

    return 0;
}