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
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        addition();
    }
    return 0;
}