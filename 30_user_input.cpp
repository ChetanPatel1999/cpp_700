// how to take user input for object
#include <iostream>
using namespace std;
class employe
{
    string name;
    float salary;

public:
    void setEmploye()
    {
        cout << "enter employe info : " << endl;
        cout << "enter name : ";
        cin >> name;
        cout << "enter salary : ";
        cin >> salary;
    }
    void getEmploye()
    {
        cout << "employ info : " << endl;
        cout << "name = " << name << endl;
        cout << "salary = " << salary << endl;
        cout << "---------------------" << endl;
    }
};
int main()
{
    employe e1, e2, e3;
    e1.setEmploye();
    e2.setEmploye();
    e3.setEmploye();

    e1.getEmploye();
    e2.getEmploye();
    e3.getEmploye();
    return 0;
}