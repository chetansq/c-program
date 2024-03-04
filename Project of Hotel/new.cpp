#include <iostream>
// #include <string>
using namespace std;

struct view
{
    string dname;
    double Price;
    double quantity;
    double total;
};

class Hotel
{
    static double tableNo;
    string name;
    long int phoneNo;

public:
    double dishNo;
    string dname;
    double Price;
    double total;

    Hotel() {}

    Hotel(double t1, string n1, double p1)
    {
        dishNo = t1;
        dname = n1;
        Price = p1;
    }
    // ---------------add name--------------
    void addTable()
    {
        cout << "Enter your Name : ";
        getline(cin, name);

        cout << "Enter your Mobile Number : ";
        cin >> phoneNo;

        tableNo++;
    }

    static double tablenois()
    {
        cout << "Table No : " << tableNo << endl;
    }

    void tabledata()
    {
        cout << "Name is : " << name << endl;
        cout << "Phone No : " << phoneNo << endl;
    }

    void prdouble(double num)
    {
        dishNo = num;
        cout << dishNo << " " << dname << " " << Price << endl;
    }

    void order()
    {
        for (double i = 1; i < 26; i++)
        {

            if (i == dishNo)
            {
                cout << "dishNo       Dishname          Price " << endl;
                cout << dishNo << "         " << dname << "   " << Price;
            }
        }
    }

    void receipt() // create receipt and generat order bill
    {
        // tablenois();
        cout << endl;
        tabledata();
        cout << endl;

        // prdouble();
    }

    view CountQuantity(double quantity)
    {
        view view1;
        view1.dname = dname;
        view1.Price = Price;
        view1.quantity = quantity;
        view1.total = view1.Price * view1.quantity;

        return view1;
        // cout << dishNo << "   " << dname << "  " << quantity << "  " << Price << "  " << total << endl;
    }
};

double Hotel ::tableNo;

int main()
{

    Hotel h1[30], h2; // iten no
    view v1[30];      // order detail

    h1[1] = Hotel{1, " Sev Tameta ", 60};
    h1[2] = Hotel{2, " Chapati ", 10};
    h1[3] = Hotel{3, " Rigan Bharthu      ", 60};
    h1[4] = Hotel{4, " Fry Bhindi         ", 60};
    h1[5] = Hotel{5, " Dal Fry            ", 50};
    h1[6] = Hotel{6, " Panir Masala       ", 100};
    h1[7] = Hotel{7, " Kaju Panir         ", 100};
    h1[8] = Hotel{8, " Nan                ", 100};
    h1[9] = Hotel{9, " Kaju Kari          ", 100};
    h1[10] = Hotel{10, " Panir Bhurji       ", 100};
    h1[11] = Hotel{11, " Manchurian         ", 120};
    h1[12] = Hotel{12, " chilli Paneer      ", 120};
    h1[13] = Hotel{13, " Hakka Noodles      ", 80};
    h1[14] = Hotel{14, " Schezwan Fried Rice ", 90};
    h1[15] = Hotel{15, " Spring Rol         ", 100};
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
    double y;
    double qty;
    int c = 0;
    double totalamount = 0;
    double netbill = 0;
    double gst = 0;

table:
    h2.tablenois();
    h2.addTable();
    cout << "\n\n"
         << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"
         << endl;
    cout << "             WELCOME TO SQ-RESTAURANT\n"
         << endl;
    cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"
         << endl;
start:
order:
end: // Add exit
    cout << "please Select a option : " << endl
         << endl;

    cout << " 1 |  Show Menu \n"
         << endl;
    cout << " 2 |  Order \n"
         << endl;
    cout << " 3 |  View Ordered \n"
         << endl;
    cout << " 4 | We Are Waiting For You (payment)" << endl
         << endl;
    cout << " 5 | Exit "<<endl<<endl;

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

                goto k1;
                break;

            case 2:

                goto k1;
                break;

            case 3:

                goto k1;
                break;

            case 4:

                //  << endl;
                goto k1;
                break;

            case 5:

                goto k1;
                break;
            default:
                break;
            }
        }
        break;

    case 2:

        cout << " Your Order :-- " << endl;

        cout << endl
             << endl;
    star:
        cout << "Enter Number for Order : " << endl;
        cin >> num;

        cout << "Qty : ";
        cin >> qty;
        cout << endl;
        v1[c] = h1[num].CountQuantity(qty);
        c++;
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

        cout << " order_No    Dish name         Qty     Price     Amount " << endl;

        for (int i = 0; i < c; i++)
        {
            cout << "    " << i + 1 << "       " << v1[i].dname << "      " << v1[i].quantity << "       " << v1[i].Price << "       " << v1[i].total << endl;
        }

        cout << endl
             << endl;

        goto order;
        break;
    case 4:

        cout << "-----------------||  Thank You  ||---------------------" << endl
             << endl;

        h2.tablenois();
        h2.receipt();

        cout << "-----------------||     BILL    ||---------------------" << endl
             << endl;

        cout << " order_No    Dish name         Qty     Price     Total " << endl;

        for (int i = 0; i < c; i++)
        {
            cout << "    " << i + 1 << "       " << v1[i].dname << v1[i].quantity << "       " << v1[i].Price << "       " << v1[i].total << endl;
            totalamount += v1[i].total;
        }

        cout << "---------------------------------------------------------" << endl;
        cout << endl;
        cout << "                  TOTAL                         " << totalamount << endl;
        gst = (totalamount * 18) / 100;
        cout << "                  GST (18%)                     " << gst << endl;
        netbill = totalamount + gst;
        cout << "                  TOTAL AMOUNT                  " << netbill << endl;
        cout << endl;
        cout << "-----------------||  Wlcome Again  ||---------------------" << endl;

    sy:
        cout << " countinue in Restaurant (y='1'/n='0') : ";
        cin >> y;

        if (y = 1)
        {
            goto table;
        }
        else if (y = 0)
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

    case 5:
        
        break;
    default:
        break;
    }
ending:

    cout << "Thank You ";
    return 0;
}

//  cout << "                      Kathiya Wadi \n"
//                      << endl;
//                 cout << "       dishes name                      Price" << endl;
//                 cout << "---------------------------------------------" << endl;
//                 cout << "1  |  Sev Tameta                          60 " << endl;
//                 cout << "2  |  Chapati                             10 " << endl;
//                 cout << "3  |  Rigan Bharthu                       60 " << endl;
//                 cout << "4  |  Fry Bhindi                          60 " << endl;
//                 cout << "5  |  Dal Fry                             50 " << endl;

// cout << "                        Panjabi \n"
//                      << endl;
//                 cout << "       dishes name                      Price" << endl;
//                 cout << "---------------------------------------------" << endl;
//                 cout << "1  |  Panir Masala                       100 " << endl;
//                 cout << "2  |  Kaju Panir                         100 " << endl;
//                 cout << "3  |  Nan                                 20 " << endl;
//                 cout << "4  |  Kaju Kari                          100 " << endl;
//                 cout << "5  |  Panir Bhurji                       100 " << endl;

// cout << "                        Chinese \n"
//                      << endl;
//                 cout << "       dishes name                      Price" << endl;
//                 cout << "---------------------------------------------" << endl;
//                 cout << "1  |  Manchurian                         120 " << endl;
//                 cout << "2  |  chilli Paneer                      120 " << endl;
//                 cout << "3  |  Hakka Noodles                       80 " << endl;
//                 cout << "4  |  Schezwan Fried Rice                 90 " << endl;
//                 cout << "5  |  Spring Rol                         100 " << endl;

// cout << "                        Cold Drinks \n"
//                      << endl;
//                 cout << "       name                         Price" << endl;
//                 cout << "---------------------------------------------" << endl;
//                 cout << "1 |  Coca Cola                       20 " << endl;
//                 cout << "2 |  Sosiyo                          20 " << endl;
//                 cout << "3 |  Sprite                          20 " << endl;
//                 cout << "4 |  Thums Up                        20 " << endl;
//                 cout << "5 |  Mengo                           20 " << endl;
//                 cout << "6 |  Chhash                          20 " << endl

// cout << "                       Dessert \n"
//                      << endl;
//                 cout << "        name                          Price" << endl;
//                 cout << "---------------------------------------------" << endl;
//                 cout << "22 |  Ice-Cream                         50 " << endl;
//                 cout << "23 |  Cakeballs                         50 " << endl;
//                 cout << "24 |  Chocolate Cake                    60 " << endl;
//                 cout << "25 |  Mini Cupcakes                     30 " << endl;
//                 cout << "26 |  Pestrys                           40 " << endl
//                      << endl;

//  cout << "                      Kathiya Wadi \n"
//              << endl;
//         cout << "       dishes name                      Price" << endl;
//         cout << "---------------------------------------------" << endl;
//         cout << "1  |  Sev Tameta                          60 " << endl;
//         cout << "2  |  Chapati                             10 " << endl;
//         cout << "3  |  Rigan Bharthu                       60 " << endl;
//         cout << "4  |  Fry Bhindi                          60 " << endl;
//         cout << "5  |  Dal Fry                             50 " << endl
//              << endl;

//         cout << "                        Panjabi \n"
//              << endl;
//         cout << "       dishes name                      Price" << endl;
//         cout << "---------------------------------------------" << endl;
//         cout << "6  |  Panir Masala                       100 " << endl;
//         cout << "7  |  Kaju Panir                         100 " << endl;
//         cout << "8  |  Nan                                20 " << endl;
//         cout << "9  |  Kaju Kari                          100 " << endl;
//         cout << "10 |  Panir Bhurji                       100 " << endl
//              << endl;

//         cout << "                        Chinese \n"
//              << endl;
//         cout << "       dishes name                      Price" << endl;
//         cout << "---------------------------------------------" << endl;
//         cout << "11 |  Manchurian                         120 " << endl;
//         cout << "12 |  chilli Paneer                      120 " << endl;
//         cout << "13 |  Hakka Noodles                       80 " << endl;
//         cout << "14 |  Schezwan Fried Rice                 90 " << endl;
//         cout << "15 |  Spring Rol                         100 " << endl
//              << endl;

//         cout << "                  Cold Drinks \n"
//              << endl;
//         cout << "       name                         Price" << endl;
//         cout << "---------------------------------------------" << endl;
//         cout << "16 |  Coca Cola                       20 " << endl;
//         cout << "17 |  Sosiyo                          20 " << endl;
//         cout << "18 |  Sprite                          20 " << endl;
//         cout << "19 |  Thums Up                        20 " << endl;
//         cout << "20 |  Mengo                           20 " << endl;
//         cout << "21 |  Chhash                          20 " << endl
//              << endl;

//         cout << "                       Dessert \n"
//              << endl;
//         cout << "        name                          Price" << endl;
//         cout << "---------------------------------------------" << endl;
//         cout << "22 |  Ice-Cream                         50 " << endl;
//         cout << "23 |  Cakeballs                         50 " << endl;
//         cout << "24 |  Chocolate Cake                    60 " << endl;
//         cout << "25 |  Mini Cupcakes                     30 " << endl;
//         cout << "26 |  Pestrys                           40 " << endl
//              << endl;