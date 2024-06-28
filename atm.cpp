#include <iostream>
using namespace std;

int main() {
    int balance = 0; // Initializing the balance amount as 0
    int new_transaction;
    int amount;

    do {
        cout << "Welcome to the ATM!\n";
        cout << "Please select an option:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> new_transaction;

        switch(new_transaction) {
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;
            case 3:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;
            case 4:
                cout << "Thank you for the visit!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

        cout << endl;
    } while (new_transaction != 4);

    return 0;
}
