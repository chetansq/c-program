#include <iostream>
using namespace std;

class Fuel
{
private:
    int FlightNo;
    char Destination[50];
    float Distance;
    float Fuel;

    void calfuel();

public:
    void feedinfo()
    {

        cout << "Flight Number : ";
        cin >> FlightNo;

        cout << "Destination : ";
        cin >> Destination;

        cout << "Distance : ";
        cin >> Distance;
    }

    void showdata()
    {
        cout << "Flight Number : " << FlightNo << endl;
        cout << "Destination : " << Destination << endl;
        cout << "Distance : " << Distance << endl;
        calfuel();
    }
};

void Fuel ::calfuel()
{

    if (Distance <= 1000)
    {

        Fuel = Distance / 96 * 10;
        cout << "fuel is : " << Fuel << endl;
    }
    else if (Distance > 1000 && Distance <= 2000)
    {

        Fuel = Distance / 96 * 10;
        cout << "fuel is : " << Fuel << endl;
    }
    else
    {
        Fuel = Distance / 96 * 10;
        cout << "fuel is : " << Fuel << endl;
    }
}

int main()
{
    Fuel qty;

    qty.feedinfo();

    qty.showdata();

    return 0;
}