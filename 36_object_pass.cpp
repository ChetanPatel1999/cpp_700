#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;

public:
    void setStudent(string n, int r, float p) // setter method
    {
        name = n;
        rno = r;
        per = p;
    }

    void getStudent() // getter method
    {
        cout << "student info : " << endl;
        cout << "name = " << name << endl;
        cout << "rno = " << rno << endl;
        cout << "per = " << per << endl;
        if (per >= 33)
        {
            cout << "student pass " << endl;
        }
        else
        {
            cout << "student Fail " << endl;
        }
        cout << "-------------------------" << endl;
    }
    void average(student obj)
    {
        float avg = (per + obj.per) / 2;
        cout << "average of " << name << " and " << obj.name << " = " << avg << endl;
    }
    void average(student obj1, student obj2)
    {
        float avg = (per + obj1.per + obj2.per) / 3;
        cout << "average of " << name << " and " << obj1.name << " and " << obj2.name << " = " << avg << endl;
    }
    
};
int main()
{
    student s1, s2, s3, s4;

    s1.setStudent("ram", 101, 45.67);

    s2.setStudent("shyam", 102, 12.67);

    s3.setStudent("sarvagya", 103, 5.67);

    s4.setStudent("sandeep", 104, 67.89);

    s1.getStudent();

    s2.getStudent();

    s3.getStudent();

    s4.getStudent();

    s1.average(s2);

    s1.average(s2, s3);
    return 0;
}