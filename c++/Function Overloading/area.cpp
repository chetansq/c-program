#include <iostream>
#include <math.h>

using namespace std;

float area(float pi, int r)
{

    float total = pi * r * r;
    return total;
}

int area(int a)
{
    int s;
    s = a * a;
    return s;
}

int area(int l, int h)
{
    int r;
    r = l * h;
    return r;
}

float area(float a, float b, float c)
{
    float t, tr;
    t = (a + b + c) / 2;
    tr = sqrt(t * (t - a) * (t - b) * (t - c));
    return tr;
}

int main()
{
    // area of cirlce

    cout << "Area of Circle " << endl;
    float circle;
    float pi;
    int r;

    cout << "enter value of PI : ";
    cin >> pi;

    cout << "enter value of r : ";
    cin >> r;
    circle = area(pi, r);
    cout << "Area of Circle : " << circle;

    // area of square
    cout << endl;
    cout << "----------------" << endl;
    cout << "Area of Square " << endl;

    int n;
    cout << "Enter value of a : ";
    cin >> n;

    int square = area(n);
    cout << "Area of Square : " << square;

    // area of Rectangle
    cout << endl;
    cout << "----------------" << endl;
    cout << "Area of Square " << endl;

    int l, h;
    cout << "Enter value of l : ";
    cin >> l;
    cout << "enter value of h : ";
    cin >> h;

    int rectangle = area(l, h);
    cout << "Area of rectangle : " << rectangle;

    // area of triangle
    cout << endl;
    cout << "----------------" << endl;
    cout << "Area of triangle " << endl;

    float x, y, z;
    cout << "Enter value of x : ";
    cin >> l;
    cout << "enter value of y : ";
    cin >> y;
    cout << "enter value of z : ";
    cin >> z;

    float triangle = area(x, y, z);
    cout << "Area of triangle : " << triangle;
    

    return 0;
}