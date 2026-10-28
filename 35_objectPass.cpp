#include <iostream>
using namespace std;
class Data
{
    int num1;
    int num2;

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "Data : " << endl;
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "-------------" << endl;
    }

    void sumSameObjectData()
    {
        int sum = num1 + num2;
        cout << "sum = " << sum << endl;
        cout << "--------------" << endl;
    }

    void sumOfDifferentObject(Data obj)
    {
        int sum1 = num1 + obj.num1;
        int sum2 = num2 + obj.num2;
        cout << "sum = " << sum1 << endl;
        cout << "sum = " << sum2 << endl;
        cout << "--------------" << endl;
    }

    static void sumOfDifferentObjectStaticMethod(Data obj1,Data obj2)
    {
        int sum1 = obj1.num1 + obj2.num1;
        int sum2 = obj1.num2 + obj2.num2;
        cout << "sum = " << sum1 << endl;
        cout << "sum = " << sum2 << endl;
        cout << "--------------" << endl;
    }
};
int main()
{
    Data d1, d2;
    d1.setData(12, 5);
    d2.setData(15, 10);
    d1.display();
    d2.display();

    d1.sumSameObjectData();
    d2.sumSameObjectData();

    d1.sumOfDifferentObject(d2);

    Data::sumOfDifferentObjectStaticMethod(d1,d2);

    return 0;
}