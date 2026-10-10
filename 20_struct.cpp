#include <iostream>
using namespace std;
struct student
{
    string name;
    int rno;
    float per;
};
int main()
{

    student s1, s2 = {"shyam", 102, 89.12}, s3;

    s1.name = "ram";
    s1.rno = 101;
    s1.per = 56.78;

    cout << "student1 info : " << endl;
    cout << "name : " << s1.name << endl;
    cout << "rno : " << s1.rno << endl;
    cout << "per : " << s1.per << endl;
    cout << "-----------------------" << endl;

    cout << "student2 info : " << endl;
    cout << "name : " << s2.name << endl;
    cout << "rno : " << s2.rno << endl;
    cout << "per : " << s2.per << endl;
    return 0;
}