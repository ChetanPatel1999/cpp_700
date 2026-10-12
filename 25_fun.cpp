// function no return  with parameter
#include <iostream>
using namespace std;
void studentDisplay(string name, int rno, float per)
{
    cout << "student info : " << endl;
    cout << "name = " << name << endl;
    cout << "rno = " << rno << endl;
    cout << "per = " << per << endl;
    cout << "-----------------------" << endl;
}
void addition(int a, int b)
{
    int c;
    c = a + b;
    cout << "addition = " << c << endl;
}
int main()
{
    addition(56, 10);
    addition(50, 10);
    addition(400, 30);
    studentDisplay("ram sharma", 102, 34.56);
    studentDisplay("rydham patel", 103, 90.56);
    studentDisplay("ravi sisodiya", 104, 80.23);
    return 0;
}