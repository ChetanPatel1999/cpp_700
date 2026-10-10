#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;

    cout << "enter name : ";
    cin >> name;

    cout << "enter age : ";
    cin >> age;

    cout << "enter height : ";
    cin >> height;

    cout << "enter gender : ";
    cin >> gender;

    cout << "name of person = " << name << endl;
    cout << "age of person = " << age << endl;
    cout << "height of person = " << height << endl;
    cout << "gender of person = " << gender << endl;
    return 0;
}