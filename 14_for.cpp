// wap to print even number.
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 1; i <= 20; i++) // 3
    {
        if (i % 2 == 0)
        {
            cout << i << "  ";
        }
    }
    return 0;
}