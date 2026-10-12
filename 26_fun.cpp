// with paramter and with return type
#include <iostream>
using namespace std;
int addition(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int sq(int num)
{
    return num * num;
}
int main()
{
    cout << addition(4, 7) << endl;
    cout << addition(14, 17) << endl;
    int res = addition(10, 40);
    int square = sq(res);
    cout << res << endl;
    cout << square << endl;
    cout << sq(3);
    return 0;
}