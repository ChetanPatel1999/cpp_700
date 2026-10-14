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
        cout << "-------------------------" << endl;
    }
};
int main()
{
    student s1, s2, s3, s4;

    s1.setStudent("ram", 101, 45.67);

    s2.setStudent("shyam", 102, 80.67);

    s3.setStudent("sarvagya", 103, 90.67);

    s4.setStudent("sandeep", 104, 67.89);

    s1.getStudent();

    s2.getStudent();

    s3.getStudent();

    s4.getStudent();

    return 0;
}