#include <iostream>
#include <string.h>
using namespace std;

class Hotel
{
    static int tableNo;
    string name;
    long int phoneNo;

public:
    int dishNo;
    string dname;
    int prise;
    int recipt1 = 0;
    Hotel() {}

    Hotel(int t1, string n1, int p1)
    {
        dishNo = t1;
        dname = n1;
        prise = p1;
    }
    // ---------------add name--------------
    void addTable()
    {
        cout << "Enter your Name : ";
        cin >> name;

        cout << "Enter your Mobile Number : ";
        cin >> phoneNo;

        tableNo++;
    }

    static int tablenois()
    {
        cout << "Table No : " << tableNo << endl;
    }

    void tabledata()
    {
        cout << "Name is : " << name << endl;
        cout << "Phone No : " << phoneNo << endl;
    }

    void print()
    {
        for (int i = 1; i < 27; i++)
        {
            cout << dishNo << " " << dname << " " << prise << endl;
        }
    }

    void order()
    {
        for (int i = 1; i < 26; i++)
        {

            if (i == dishNo)
            {
                cout << "dishNo       Dishname          Prise " << endl;
                cout << dishNo << "         " << dname << "   " << prise;
            }
        }
    }

    void receipt() // create receipt and generat order bill
    {
        // tablenois();
        cout << endl;
        tabledata();
        cout << endl;

        // print();
    }
};

int Hotel ::tableNo;

int main()
{

    Hotel h1[30], h2;
table:
    h2.tablenois();
    h2.addTable();

    h1[1] = Hotel{1, "Sev Tameta", 60};
    h1[2] = Hotel{2, "Chapati", 10};
    h1[3] = Hotel{3, " Rigan Bharthu      ", 60};
    h1[4] = Hotel{4, " Fry Bhindi         ", 60};
    h1[5] = Hotel{5, " Dal Fry            ", 50};
    h1[6] = Hotel{6, " Panir Masala       ", 100};
    h1[7] = Hotel{7, " Kaju Panir         ", 100};
    h1[8] = Hotel{8, " Kaju Masala        ", 100};
    h1[9] = Hotel{9, " Kaju Kari          ", 100};
    h1[10] = Hotel{0, " Panir Bhurji       ", 100};
    h1[11] = Hotel{1, " Manchurian         ", 120};
    h1[12] = Hotel{2, " chilli Paneer      ", 120};
    h1[13] = Hotel{3, " Hakka Noodles      ", 80};
    h1[14] = Hotel{4, " Schezwan Fried Rice ", 90};
    h1[15] = Hotel{5, " Spring Rol         ", 100};
    h1[16] = Hotel{16, " Coca Cola          ", 20};
    h1[17] = Hotel{17, " Sosiyo             ", 20};
    h1[18] = Hotel{18, " Sprite             ", 20};
    h1[19] = Hotel{19, " Thums Up           ", 20};
    h1[20] = Hotel{20, " Mengo              ", 20};
    h1[21] = Hotel{21, " Chhash             ", 20};
    h1[22] = Hotel{22, " Ice-Cream          ", 50};
    h1[23] = Hotel{23, " Cakeballs          ", 50};
    h1[24] = Hotel{24, " Chocolate Cake     ", 60};
    h1[25] = Hotel{25, " Mini Cupcakes      ", 30};
    h1[26] = Hotel{26, " Pestrys            ", 40};

    int option;
    int menu_option;
    int num;
    int y;
    // int d;
    cout << "\n\n"
         << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"
         << endl;
    cout << "             WELCOME TO SQ-RESTAURANT\n"
         << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"
         << endl;
start:
end: // Add option paymet,checkout,exit
    cout << "please Select a option : " << endl
         << endl;

    cout << "1 |  Show Menu \n"
         << endl;
    cout << "2 |  Order \n"
         << endl;
    cout << "3 |  We Are Waiting For You (payment) \n"
         << endl;
    cout << "4 | Exit" << endl
         << endl;
    cin >> option;

    switch (option)
    {
    case 1:
    k1:
        // cout << " Welcome " << endl;

        cout << endl;
        cout << "||||||||||         Menu         ||||||||||||\n"
             << endl;

        cout << "1 | Kathiya wadi \n"
             << endl;
        cout << "2 | Panjabi \n"
             << endl;
        cout << "3 | Chinese \n"
             << endl;
        cout << "4 | Cold Drinks \n"
             << endl;
        cout << "5 | Dessert \n"
             << endl;

        cout << "Show Menu (Exit ='0'): " << endl;
        cin >> menu_option;
        if (menu_option == 0)
        {
            goto start;
        }
        else
        {

            switch (menu_option)
            {
            case 1:
                cout << "                      Kathiya Wadi \n"
                     << endl;
                cout << "       dishes name                      Prise" << endl;
                cout << "---------------------------------------------" << endl;
                cout << "1  |  Sev Tameta                          60 " << endl;
                cout << "2  |  Chapati                             10 " << endl;
                cout << "3  |  Rigan Bharthu                       60 " << endl;
                cout << "4  |  Fry Bhindi                          60 " << endl;
                cout << "5  |  Dal Fry                             50 " << endl;

                goto k1;
                break;

            case 2:

                cout << "                        Panjabi \n"
                     << endl;
                cout << "       dishes name                      Prise" << endl;
                cout << "---------------------------------------------" << endl;
                cout << "1  |  Panir Masala                       100 " << endl;
                cout << "2  |  Kaju Panir                         100 " << endl;
                cout << "3  |  Kaju Masala                        100 " << endl;
                cout << "4  |  Kaju Kari                          100 " << endl;
                cout << "5  |  Panir Bhurji                       100 " << endl;
                goto k1;
                break;

            case 3:
                cout << "                        Chinese \n"
                     << endl;
                cout << "       dishes name                      Prise" << endl;
                cout << "---------------------------------------------" << endl;
                cout << "1  |  Manchurian                         120 " << endl;
                cout << "2  |  chilli Paneer                      120 " << endl;
                cout << "3  |  Hakka Noodles                       80 " << endl;
                cout << "4  |  Schezwan Fried Rice                 90 " << endl;
                cout << "5  |  Spring Rol                         100 " << endl;
                goto k1;
                break;

            case 4:
                cout << "                        Cold Drinks \n"
                     << endl;
                cout << "       name                         Prise" << endl;
                cout << "---------------------------------------------" << endl;
                cout << "1 |  Coca Cola                       20 " << endl;
                cout << "2 |  Sosiyo                          20 " << endl;
                cout << "3 |  Sprite                          20 " << endl;
                cout << "4 |  Thums Up                        20 " << endl;
                cout << "5 |  Mengo                           20 " << endl;
                cout << "6 |  Chhash                          20 " << endl
                     << endl;
                goto k1;
                break;

            case 5:
                cout << "                       Dessert \n"
                     << endl;
                cout << "        name                          Prise" << endl;
                cout << "---------------------------------------------" << endl;
                cout << "22 |  Ice-Cream                         50 " << endl;
                cout << "23 |  Cakeballs                         50 " << endl;
                cout << "24 |  Chocolate Cake                    60 " << endl;
                cout << "25 |  Mini Cupcakes                     30 " << endl;
                cout << "26 |  Pestrys                           40 " << endl
                     << endl;
                goto k1;
                break;
            default:
                break;
            }
        }
        break;

    case 2:
        cout << "                      Kathiya Wadi \n"
             << endl;
        cout << "       dishes name                      Prise" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "1  |  Sev Tameta                          60 " << endl;
        cout << "2  |  Chapati                             10 " << endl;
        cout << "3  |  Rigan Bharthu                       60 " << endl;
        cout << "4  |  Fry Bhindi                          60 " << endl;
        cout << "5  |  Dal Fry                             50 " << endl
             << endl;

        cout << "                        Panjabi \n"
             << endl;
        cout << "       dishes name                      Prise" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "6  |  Panir Masala                       100 " << endl;
        cout << "7  |  Kaju Panir                         100 " << endl;
        cout << "8  |  Kaju Masala                        100 " << endl;
        cout << "9  |  Kaju Kari                          100 " << endl;
        cout << "10 |  Panir Bhurji                       100 " << endl
             << endl;

        cout << "                        Chinese \n"
             << endl;
        cout << "       dishes name                      Prise" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "11 |  Manchurian                         120 " << endl;
        cout << "12 |  chilli Paneer                      120 " << endl;
        cout << "13 |  Hakka Noodles                       80 " << endl;
        cout << "14 |  Schezwan Fried Rice                 90 " << endl;
        cout << "15 |  Spring Rol                         100 " << endl
             << endl;

        cout << "                  Cold Drinks \n"
             << endl;
        cout << "       name                         Prise" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "16 |  Coca Cola                       20 " << endl;
        cout << "17 |  Sosiyo                          20 " << endl;
        cout << "18 |  Sprite                          20 " << endl;
        cout << "19 |  Thums Up                        20 " << endl;
        cout << "20 |  Mengo                           20 " << endl;
        cout << "21 |  Chhash                          20 " << endl
             << endl;

        cout << "                       Dessert \n"
             << endl;
        cout << "        name                          Prise" << endl;
        cout << "---------------------------------------------" << endl;
        cout << "22 |  Ice-Cream                         50 " << endl;
        cout << "23 |  Cakeballs                         50 " << endl;
        cout << "24 |  Chocolate Cake                    60 " << endl;
        cout << "25 |  Mini Cupcakes                     30 " << endl;
        cout << "26 |  Pestrys                           40 " << endl
             << endl;

        cout << " Your Order :-- " << endl;

        cout << endl
             << endl;
    star:
        cout << "Enter Number for Order : " << endl;
        cin >> num;
        for (int i = 1; i < 27; i++)
        {
            if (i == num)
                h1[i].print();
        }
        cout << endl;
    s:
        cout << "Do you want to countinue Order (y='1'/n='0') : ";
        cin >> y;

        if (y == 1)
        {
            goto star;
        }
        else if (y == 0)
        {
            goto end;
        }
        else
        {
            cout << endl
                 << endl;
            cout << "Not Match !, please enter 'y=1' or 'n=0' \n";
            goto s;
        }

        break;

    case 3:

        cout << "-----------------||  Thank You  ||---------------------" << endl
             << endl;
        h2.tablenois();
        h2.receipt();
        // cout<<endl;
        cout << "-----------------||     BILL    ||---------------------" << endl
             << endl;

        for (int i = 1; i < 27; i++)
        {

            if (i == num)
            {
                h1[i].order();
                cout << endl;
            }
        }
        cout << endl;
        cout << "-----------------||  Wlcome Again  ||---------------------" << endl;

    sy:
        cout << " countinue in Restaurant (y='1'/n='0') : ";
        cin >> y;

        if (y == 1)
        {
            goto table;
        }
        else if (y == 0)
        {
            goto ending;
        }
        else
        {
            cout << endl
                 << endl;
            cout << "Not Match !, please enter 'y=1' or 'n=0' \n";
            goto sy;
        }
        break;

    default:
        break;
    }
ending:

    cout << "Thank You ";
    return 0;
}