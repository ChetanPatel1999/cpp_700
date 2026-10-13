#include <iostream>
using namespace std;
class mouse
{
public:
    string cname;
    int price;
    float rating;
    string color;
};
int main()
{
    mouse m1, m2, m3;

    m1.cname = "hp";
    m1.price = 200;
    m1.rating = 3.4;
    m1.color = "black";

    m2.cname = "frontech";
    m2.price = 700;
    m2.rating = 4.4;
    m2.color = "dark-black";

    cout << "mouse1 info : " << endl;
    cout << "cname = " << m1.cname << endl;
    cout << "price = " << m1.price << endl;
    cout << "rating = " << m1.rating << endl;
    cout << "color = " << m1.color << endl;
    cout << "------------------------------" << endl;
    cout << "mouse2 info : " << endl;
    cout << "cname = " << m2.cname << endl;
    cout << "price = " << m2.price << endl;
    cout << "rating = " << m2.rating << endl;
    cout << "color = " << m2.color << endl;

    return 0;
}