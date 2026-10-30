#include <iostream>
using namespace std;
class account
{
    string ac_name;
    string acno;
    int balance;
    static int totalBankBalance;
    static int totalAccount;
    static string bankName;

public:
    static void createAccount(account ac[], int index)
    {
        cout << "\nwelcome to create account page ..... \n";
        cout << "enter your name : ";
        cin >> ac[index].ac_name;
        cout << "enter your account number : ";
        cin >> ac[index].acno;
        cout << "enter your balance  : ";
        cin >> ac[index].balance;
        cout << "\nyour account create succefully !\n\n";
    }
    static void displayAccount(account ac[], int index)
    {
        int i;
        if (index > 0)
        {
            for (i = 0; i < index; i++) // 1
            {
                cout << "\nAccount " << i + 1 << " info : " << endl;
                cout << "account name : " << ac[i].ac_name << endl;
                cout << "account account no : " << ac[i].acno << endl;
                cout << "account balance : " << ac[i].balance << endl;
                cout << "----------------------------\n";
            }
        }
        else
        {
            cout << "\nNo one account is created\n\n";
        }
    }
};
int account::totalBankBalance = 0;
int account::totalAccount = 0;
string account::bankName = "HDFC";
int main()
{
    account ac[10];
    int num, index = 0;
    while (1)
    {
        cout << "\n<==== welcome to HDFC bank ==== >" << endl;
        cout << "    press 1  to create your account " << endl;
        cout << "    press 2  to display accounts " << endl;
        cout << "    press 3  to display single account " << endl;
        cout << "    press 4  to deposite " << endl;
        cout << "    press 5  to withdraw " << endl;
        cout << "    press 6  to diplay totalbank balance" << endl;
        cout << "    press 7  to diplay total account" << endl;
        cout << "    press 8  to exit app" << endl;
        cout << "    press any number : ";
        cin >> num; // 1
        switch (num)
        {
        case 1:
            account::createAccount(ac, index);
            index++; // 4
            break;
        case 2:
            account::displayAccount(ac, index); // 4
            break;
        case 3:
            // to diplay single account
            break;
        case 4:
            // to diposite amount
            break;
        case 5:
            // to withdraw amount
            break;
        case 6:
            // to display total bank balance
            break;
        case 7:
            // to total account
            break;
        case 8:
            exit(0);
            break;
        default:
            cout << "\ninvalid number!  please select 1 to 8 options\n\n";
        }
    }
    return 0;
}