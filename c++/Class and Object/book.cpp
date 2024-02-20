#include <iostream>
using namespace std;

class book
{
private:
    int bookNo;
    char booktitle[20];
    float price;

    void total_cost(int n);

public:
    void input()
    {
        cout << "enter book_no : ";
        cin >> bookNo;

        cout << "enter bokk title : ";
        cin >> booktitle;

        cout << "enter : ";
        cout << "enter price : ";
        cin >> price;
    }

    void purchase()
    {

        cout << "Book Number  : " << bookNo << endl;
        cout << "Book Tital : " << booktitle << endl;
        cout << "Price  : " << price << endl;

        int a;
        cout << "enter copy : ";
        cin >> a;
        total_cost(a);
    }
};

void book ::total_cost(int n)
{
    float cost;

    cost = n * price;
    cout << "cost : " << cost;
}

int main()
{
    book sale;

    sale.input();

    sale.purchase();
    return 0;
}