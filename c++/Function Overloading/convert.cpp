#include <iostream>
using namespace std;

// 1. convert dollar to rupees
float convert(float r)
{
    float d = 80.22, total;
    total = d * r;
    return total;
}

// 2. convert feet to inche
float convert(float f, int i)
{
    float total;
    total = f * i;
    return total;
}

// 3. convert inches to centimeter
float convert(int i, double cm)
{
    float total;
    total = i * cm;
    return total;
}

// 4. convert Celicious to fahrenheit
int convert(int c, int f)
{
    float total;
    total = (c * (9 / 5) + f);
    return total;
}


int main()
{
    // 1. convert dollar to rupees
    cout << "Convert to Dollar to rupees " << endl;

    float r, total;
    cout << "Enter Rupee : ";
    cin >> r;

    total = convert(r);
    cout << "convert d to r : " << total << endl;

    // 2. convert feet to inche
    cout << "----------------" << endl;

    cout << "Convert to Feet to Inche " << endl;

    float f, inches;

    cout << "Enter feet : ";
    cin >> f;

    inches = convert(f, 12);
    cout << "convert f to i : " << inches << endl;

    // 3. convert inches to centimeter
    cout << "----------------" << endl;

    cout << "Convert to Inches to Centimeter " << endl;

    float cm;
    int i;
    cout << "Enter Inches : ";
    cin >> i;

    cm = convert(i, 2.54);
    cout << "convert i to cm : " << cm << endl;

    // 4. convert Celicious to Fahrenheit
    cout << "----------------" << endl;

    cout << "Convert to Celicious to Fahrenheit " << endl;

    
    float Fahrenheit;
    int c;
    cout << "Enter Celicious : ";
    cin >> c;

    Fahrenheit = convert(c, 32);
    cout << "convert Celicious to Fahrenheit : " << Fahrenheit << endl;

    return 0;
}