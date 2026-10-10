#include <iostream>
using namespace std;
int main()
{
    float radius, area;
    cout << "enter radius : ";
    cin >> radius;
    area = 3.141 * radius * radius;
    cout << "area of circle = " << area << endl;
    return 0;
}