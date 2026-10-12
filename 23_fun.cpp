#include <iostream>
using namespace std;
void addition()
{
    int a, b, c;
    cout << "enter a = ";
    cin >> a;
    cout << "enter b = ";
    cin >> b;
    c = a + b;
    cout << "addition = " << c << endl;
}
void pattern()
{
    int i, j;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= 20; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    pattern();
    addition();
    pattern();
    addition();
    pattern();
    addition();
    pattern();
    return 0;
}