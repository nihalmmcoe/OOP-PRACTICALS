#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    string acc_type;
    int acc_no;
    float balance;

public:
    
    BankAccount(string n, int no, string t, float b) {
        name = n;
        acc_no = no;
        acc_type = t;
        balance = b;
    }
 
    void display() {
        cout << "\nAccount Details:\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << acc_no << endl;
        cout << "Account Type: " << acc_type << endl;
        cout << "Account Balance: " << balance << endl;
    }

   
    void deposit() 
        float amount;
        cout << "Enter the amount to be deposited: ";
        cin >> amount;
        balance += amount;
    }

   
    void withdraw() {
        float amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance.\n";
        } else {
            balance -= amount;
        }
    }
};

int main() {
    string name, type;
    int acc_no;
    float balance;
    int ch;

    cout << "Enter your account name: ";
    cin >> name;
    cout << "Enter your account type: ";
    cin >> type;
    cout << "Enter your account number: ";
    cin >> acc_no;
    cout << "Enter your account balance: ";
    cin >> balance;

    BankAccount obj1(name, acc_no, type, balance);

    do {
        cout << "\n1. Get Information\n2. Display\n3. Deposit\n4. Withdraw\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Account Information Already Set.\n";
                break;
            case 2:
                obj1.display();
                break;
            case 3:
                obj1.deposit();
                break;
            case 4:
                obj1.withdraw();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (ch != 5);

    return 0;
}

