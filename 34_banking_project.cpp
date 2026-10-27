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
    void createAccount(string an, string ano, int b)
    {
        ac_name = an;
        acno = ano;
        balance = b;
        totalBankBalance = totalBankBalance + balance;
        totalAccount++;
    }
    void displayAccount()
    {
        cout << "customer info : " << endl;
        cout << "Bank name : " << bankName << endl;
        cout << "Account holder : " << ac_name << endl;
        cout << "Account aumber : " << acno << endl;
        cout << "Account balance : " << balance << endl;
        cout << "--------------------------------------" << endl;
    }
    static void getTotalBankBalance()
    {
        cout << "Total Bank Balance" << endl;
        cout << "------------------" << endl;
        cout << "    " << totalBankBalance << "rs" << endl;
        cout << "------------------" << endl;
    }
    static void getTotalAccount()
    {
        cout << "Total Accounts" << endl;
        cout << "------------------" << endl;
        cout << "    " << totalAccount << endl;
        cout << "------------------" << endl;
    }
    void withdraw(int amount)
    {
        if (amount < balance)
        {
            balance = balance - amount;
            totalBankBalance = totalBankBalance - amount;
            cout << "\n"
                 << amount << " rs withdrawl succefully form " << ac_name << " account" << "\n\n ";
        }
        else
        {
            cout << "\ninsufficient balance\n\n";
        }
    }

    void deposite(int amount)
    {
        balance = balance + amount;
        totalBankBalance = totalBankBalance + amount;
        cout << "\n"
             << amount << " rs deposite succefully to " << ac_name << " account" << "\n\n ";
    }
};
int account::totalBankBalance = 0;
int account::totalAccount = 0;
string account::bankName = "HDFC";
int main()
{
    account ac1, ac2, ac3;
    ac1.createAccount("ram sharma", "1234", 5000);
    ac2.createAccount("shyam varma", "1236", 9000);
    ac3.createAccount("dev yadav", "1238", 2000);

    ac1.displayAccount();
    ac2.displayAccount();
    ac3.displayAccount();

    account::getTotalBankBalance();
    account::getTotalAccount();

    ac1.withdraw(2000);
    ac2.withdraw(300);

    ac1.displayAccount();
    ac2.displayAccount();
    account::getTotalBankBalance();

    ac1.deposite(500);

    ac1.displayAccount();
    account::getTotalBankBalance();
    return 0;
}