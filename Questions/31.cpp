#include <iostream>
using namespace std;

class OverLimit : public exception {
public:
    const char* what() const throw() {
        return "Error: Withdrawal limit is Rs.15000/- per transaction!";
    }
};
class InsufficientBalance : public exception {
public:
    const char* what() const throw() {
        return "Error: Insufficient balance in account!";
    }
};
class Account {
private:
    double balance;
public:
    Account() {
        balance = 0;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Rs." << amount << " deposited successfully. Current balance: Rs." << balance << endl;
    }
    void withdraw(double amount) {
        if (amount > 15000) {
            throw OverLimit();
        }
        if (amount > balance) {
            throw InsufficientBalance();
        }
        balance -= amount;
        cout << "Rs." << amount << " withdrawn successfully. Current balance: Rs." << balance << endl;
    }
};

int main() {
    Account myAccount;
    try {
        myAccount.deposit(50000);
        myAccount.withdraw(10000);
        myAccount.withdraw(20000);
        myAccount.withdraw(50000);  
    }
    catch (OverLimit& e) {
        cout << e.what() << endl;
    }
    catch (InsufficientBalance& e) {
        cout << e.what() << endl;
    }
    return 0;
}
