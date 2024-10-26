#include <iostream>
using namespace std;
int main()  
{double balance;  
    double withdrawal; 
    cout << "Enter your initial balance: ";
    cin >> balance;
    while (true) {
        cout << "Enter amount to withdraw: ";
        cin >> withdrawal;
        if (withdrawal == 0) {
            cout << "Exit,Thank you!" << endl;
            break;    }
        if (withdrawal > balance) {
            cout << "Insufficient balance. Your balance is :" << balance<< endl;
        } else {  balance -= withdrawal;
            cout << "You have withdrawn :" << withdrawal << endl;
            cout << "Remaining balance :" << balance << endl;   } 
  return 0;
  }
}
