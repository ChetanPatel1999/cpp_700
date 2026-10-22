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
        cout << "\nenter employe info : " << endl;
        cout << "enter name : ";
        cin >> name;
        cout << "enter salary : ";
        cin >> salary;
    }
    void getEmploye()
    {
        cout << "\nemploy info : " << endl;
        cout << "name = " << name << endl;
        cout << "salary = " << salary << endl;
        cout << "---------------------" << endl;
    }
};
int main()
{
    // employe e[5];
    // e[0].setEmploye();
    // e[1].setEmploye();
    // e[2].setEmploye();
    // e[3].setEmploye();
    // e[4].setEmploye();

    // e[0].getEmploye();
    // e[1].getEmploye();
    // e[2].getEmploye();
    // e[3].getEmploye();
    // e[4].getEmploye();

    employe e[5];
    int i;
    for (i = 0; i < 5; i++) // 2
    {
        e[i].setEmploye();
    }

    for (i = 0; i < 5; i++) // 2
    {
        e[i].getEmploye();
    }

    return 0;
}