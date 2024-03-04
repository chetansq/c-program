#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st = "skill ";
    string st2;

    // ofstream out("string.txt");
    // out << st;
    ifstream in("string.txt");
    getline(in, st2);   //getline() use only one line print
    cout << st2;
    // getline(in, st2); // multiple line print -> multiple use getline()
    // cout << st2;

    return 0;
}