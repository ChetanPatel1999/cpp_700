#include <iostream>
using namespace std;
class Demo
{
    int a;
    int b;
    static int c;
    static int d;

public:
    void setData(int r, int s, int t, int u)
    {
        a = r;
        b = s;
        c = t;
        d = u;
    }
    void getData()
    {
        cout << "data :" << endl;
        cout << "a = " << a << " , b = " << b << endl;
        cout << "c = " << c << " , d = " << d << endl;
    }
};

int Demo::c;
int Demo::d;
int main()
{
    Demo d1, d2, d3;
    d1.setData(12, 13, 100, 200);
    d2.setData(14, 15, 200, 300);
    d3.setData(16, 17, 400, 500);

    d1.getData();
    d2.getData();
    d3.getData();
    return 0;
}