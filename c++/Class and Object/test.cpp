#include <iostream>
// #include <string.h>
using namespace std;

class Test
{
private:
    int TestCode;
    char Description[50];
    int NoCandidate;
    int CenterReqd;

    float calcntr();

public:
    void schedule()
    {
        cout << "enter Testcode : ";
        cin >> TestCode;

        cout << "enter Description :";
        cin >> Description;

        cout << "enter Nocandidate :";
        cin >> NoCandidate;

        cout << endl;
    }
    // void calcntr();

    void disptest()
    {
        cout << "TestCode : " << TestCode << endl;
        cout << "Description : " << Description << endl;
        cout << "NoCandidate : " << NoCandidate << endl;
        int a;
        a = calcntr();
        cout << "CenterReqd : " << a << endl;
    }
};

float Test ::calcntr()
{
    CenterReqd = NoCandidate / 100 + 1;
    return CenterReqd;
    // cout << "CenteRed : " << CenterReqd << endl;
}

int main()
{
    Test data;

    data.schedule();
    data.disptest();

    // data.calcntr();

    return 0;
}