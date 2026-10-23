#include <iostream>
using namespace std;
class employe
{
    string name;
    float salary;
   

public:
    void setEmploye(string n, float s)
    {
        name = n;
        salary = s;
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
    e1.setEmploye("ram", 12000);

    e2.setEmploye("shyam", 15000);

    e3.setEmploye("raj", 8000);

    e1.getEmploye();
    e2.getEmploye();
    e3.getEmploye();
    return 0;
}