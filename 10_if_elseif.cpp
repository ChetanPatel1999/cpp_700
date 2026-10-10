// wap to check given num is positive , nagatiuve or zero.
// 0
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num == 0)
    {
        cout << "num is zero";
    }
    else if (num > 0)
    {
        cout << "num is positive";
    }
    else
    {
        cout << "num is nagative";
    }
    return 0;
}