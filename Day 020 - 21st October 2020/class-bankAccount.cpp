#include <iostream>
using namespace std;

class bankAccount{
    string depositor;
    long account_number;
    string type_of_account;
    float balance_ammount;
public:
    void intitialize(int acc_no, string name, string acc_type, float balance){
        depositor = name;
        account_number = acc_no;
        type_of_account = acc_type;
        balance_ammount = balance;
    }
    void deposit();
    void withdraw();
    void display();
};

void bankAccount :: deposit(){
    int deposit;
    cout << "\nEnter Deposit Amount: ";
    cin >> deposit;
    balance_ammount += deposit;
}
void bankAccount :: withdraw(){
    int withdraw_amount;
    cout << "\nEnter Withdraw Amount = ";
    cin >> withdraw_amount;
    if(withdraw_amount > balance_ammount)
        cout << "\n Cannot Withdraw Amount";
    balance_ammount -= withdraw_amount;
}
void bankAccount :: display(){
    cout << "+++++++++++++++++++++++++++" << endl;
    cout << "\nAccout No. : " << account_number;
    cout << "\nName : " << depositor;
    cout << "\nAccount Type : " << type_of_account;
    cout << "\nBalance : "<< balance_ammount;
}


int main(){
    int acc_no;
    string name, acc_type;
    float balance;
    cout << "<-- Enter Details -->" << endl;
    cout << "-----------------------" << endl;
    cout << "Accout No.: ";
    cin >> acc_no;
    cout << "Name: ";
    cin >> name;
    cout << "Account Type: ";
    cin >> acc_type;
    cout << "Balance: ";
    cin >> balance;

    bankAccount shreyas;
    shreyas.intitialize(acc_no, name, acc_type, balance);
    shreyas.deposit();
    shreyas.withdraw();
    shreyas.display();

    return 0;

}
