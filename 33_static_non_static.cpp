#include <iostream>
using namespace std;
class student
{
    string name;
    int rno;
    float per;
    static int totalPass;
    static int totalFail;
    static string collageName;
    static int totalstd;

public:
    void setStudent(string n, int r, float p)
    {
        name = n;
        rno = r;
        per = p;
        totalstd++;
        if (per > 33)
        {
            totalPass++;
        }
        else
        {
            totalFail++;
        }
    }

    void getResultCard()
    {
        cout << "student ResultCard : " << endl;
        cout << "collage name : " << collageName << endl;
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

    void getTotalResult()
    {
        cout << "total Result :" << endl;
        cout << "total pass = " << totalPass << endl;
        cout << "total fail = " << totalFail << endl;
        cout << "--------------------------------" << endl;
    }
    void getTotalStudent()
    {
        cout << "total student = " << totalstd << endl;
        cout << "--------------------------------" << endl;
    }
};
int student::totalPass = 0;
int student::totalFail = 0;
int student::totalstd = 0;
string student::collageName = "Holker Science Collage";
int main()
{
    student s1, s2, s3, s4;

    s1.setStudent("ram", 101, 4.67);

    s2.setStudent("shyam", 102, 12.67);

    s3.setStudent("sarvagya", 103, 5.67);

    s4.setStudent("sandeep", 104, 67.89);

    s1.getResultCard();
    s2.getResultCard();
    s3.getResultCard();
    s4.getResultCard();

    s1.getTotalResult();
    s1.getTotalStudent();
    return 0;
}