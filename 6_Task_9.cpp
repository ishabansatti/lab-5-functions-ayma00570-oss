#include <iostream>
#include <iomanip>
using namespace std;
class BankAccount{
    private:
    string accountNumber;
    double balance;
    int pin;
    public:
    BankAccount(string accNum, double bal, int p){
        accountNumber = accNum;
        balance = bal;
        pin = p;
    }
    void deposit(double amount){
        balance += amount;
    }
    void withdraw(double amount){
        if(amount > balance){
            cout<<"Insufficient balance!"<<endl;
        }
        else{
            balance -= amount;
        }
    }
    const getBalance() const{
        return balance;
    }
    void display(){
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Balance: Rs."<<balance<<endl;
    }
};
int main() {
    BankAccount account1("123456789", 5000.00, 1234);
    account1.display();
    account1.deposit(2000.00);
    cout<<"After deposit of Rs.2000.00:"<<endl;
    account1.display();
    account1.withdraw(3000.00);
    cout<<"After withdrawal of Rs.3000.00:"<<endl;
    account1.display();
    account1.withdraw(5000.00);
    return 0;
}