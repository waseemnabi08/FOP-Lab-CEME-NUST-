#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct account{
    string acc_no;
    double balance;
    double int_rate;
    double avg_bal;
};

account store();
void display(account s2);

int main()
{
    account acc;
    acc = store();

    display(acc);
}

account store()
{
    account s1;
    cout <<"Enter account number:";
    cin >> s1.acc_no;

    cout <<"Enter account balance: ";
    cin >> s1.balance;

    cout <<"Enter interest rate: ";
    cin >> s1.int_rate;

    cout << "Enter average monthly balance: ";
    cin >> s1.avg_bal;

    return s1;
}

void display(account s2)
{

 cout << "Acc No. " << setw(20) << "Acc balance " << setw(10) << "interset rate" << setw(10) << "average balance" << endl;
 cout << s2.acc_no << setw(20) << s2.balance << setw(10) << s2.int_rate << setw(10) << s2.avg_bal << endl;
}