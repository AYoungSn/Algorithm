#include <iostream>
#include <iomanip>
using namespace std;

class Account {
public:
	Account()
	{
		id = 0;
		balance = annualInterestRate = 0;
	}
	int getId() {
		return id;
	}double getBalance() {
		return balance;
	}double getAnnualInterestRate(){
		return annualInterestRate;
	}
	void setId(int _id) {
		id = _id;
	}
	void setBalance(double _balance) {
		balance = _balance;
	}void setAnnualInterestRate(double _annualInterestRate) {
		annualInterestRate = _annualInterestRate;
	}
	double getMonthlyInterestRate() {
		return annualInterestRate / 12;
	}
	void withDraw(double amount) {
		balance -= amount;
	}
	void deposit(double amount) {
		balance += amount;
	}
private:
	int id;
	double balance;
	double annualInterestRate;
};
int main()
{
	Account act[10];
	for (int i = 0; i < 10; i++)
	{
		act[i].setId(i);
		act[i].setBalance(100);
	}
	int id,cho;
	double amount;

	while (true) {
		cout << "Enter an id: ";
		cin >> id;
		if (id < 0 || id >= 10) {
			cout << "올바른 id를 입력하시오.\n";
			continue;
		}
		do {
			cout << endl;
			cout << "Main menu\n" <<
				"1: check balance\n" <<
				"2: withdraw\n" <<
				"3: deposit\n" <<
				"4: exit\n" <<
				"Enter a choice: ";
			cin >> cho;
			switch (cho) {
			case 1:
				cout <<fixed<<setprecision(1)<< "The balance is " << act[id].getBalance()<<endl;
				break;
			case 2:
				cout << "Enter an amount to withdraw: ";
				cin >> amount;
				act[id].withDraw(amount);
				break;
			case 3:
				cout << "Enter an amount to deposit: ";
				cin >> amount;
				act[id].deposit(amount);
				break;
			case 4:
				cout << endl;
				break;
			}
		} while (cho != 4);
	}


	system("pause");
	return 0;
}