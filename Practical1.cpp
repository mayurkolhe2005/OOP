Practical 1
Topic: Operations on Bank Account
Name: Kolhe Mayur Navnath
PRN: B24CE1100
Code:
// Implement a class to illustrate working of a bank account of a customer
#include <iostream>
#include <string>
using namespace std;
class bank_account {
string name;
string Acc_type;
long int Acc_number;
long int Avail_balance;
public:
bank_account(string n, string at, long int an, long int b) {
cout<<"Parameterized Constructor";
name = n;
Acc_type = at;
Acc_number = an;
Avail_balance = b;
}
void display();
void deposit();
void withdraw();
void check_balance();
};
void bank_account::display() {
cout << "\nName: " << name << "\n";
cout << "Account Type: " << Acc_type << "\n";
cout << "Account Number: " << Acc_number << "\n";
cout << "Available Balance: " << Avail_balance << "\n\n";
}
void bank_account::deposit() {
double amt_dep;
cout << "Enter the amount to be deposited: ";
cin >> amt_dep;
Avail_balance += amt_dep;
cout << "Updated Balance: " << Avail_balance << "\n\n";
}
void bank_account::withdraw() {
double amt_wtdr;
cout << "Enter the amount to withdraw: ";
cin >> amt_wtdr;
if (amt_wtdr > Avail_balance) {
cout << "Insufficient balance!\n\n";
} else {
Avail_balance -= amt_wtdr;
cout << "Updated Balance: " << Avail_balance << "\n\n";
}
}
void bank_account::check_balance() {
cout << "Current Available Balance: " << Avail_balance << "\n\n";
}
int main() {
string n, at;
long int an, b;
cout << "Enter the name: ";
cin >> n;
cout << "Enter account type (Savings/Current): ";
cin >> at;
cout << "Enter the account number: ";
cin >> an;
cout << "Enter the available balance: ";
cin >> b;
bank_account obj1(n, at, an, b);
obj1.display();
int choice;
do {
cout << "\nEnter the no. of action: \n";
cout << "1. Display\n";
cout << "2. Deposit\n";
cout << "3. Withdraw\n";
cout << "4. Check Balance\n";
cout << "5. Exit\n";
cout << "Enter your choice: ";
cin >> choice;
switch (choice) {
case 1:
obj1.display();
break;
case 2:
obj1.deposit();
break;
case 3:
obj1.withdraw();
break;
case 4:
obj1.check_balance();
break;
case 5:
cout << "Exiting program...\n";
break;
default:
cout << "Invalid choice. Please select between 1 to 5.\n";
}
} while (choice != 5);
return 0;
}
Output:
Enter the name: Mandar
Enter account type (Savings/Current): Savings
Enter the account number: 123456789
Enter the available balance: 100
Parameterized Constructor
Name: Mandar
Account Type: Savings
Account Number: 123456789
Available Balance: 100
Enter the no. of action:
1. Display
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 1
Name: Mandar
Account Type: Savings
Account Number: 123456789
Available Balance: 100
Enter the no. of action:
1. Display
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 2
Enter the amount to be deposited: 20
Updated Balance: 120
Enter the no. of action:
1. Display
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 3
Enter the amount to withdraw: 30
Updated Balance: 90
Enter the no. of action:
1. Display
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 4
Current Available Balance: 90
Enter the no. of action:
1. Display
2. Deposit
3. Withdraw
4. Check Balance
5. Exit
Enter your choice: 5
Exiting program...
