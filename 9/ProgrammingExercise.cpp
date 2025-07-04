#include <iostream>
#include <cmath>
using namespace std;

// 9.3
class Account
{
public:
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}

	int getId()
	{
		return id;
	}

	void setId(int newId)
	{
		id = newId;
	}

	double getBalance()
	{
		return balance;
	}

	void setBalance(double newBalance)
	{
		balance = newBalance;
	}

	double getAnnualInterestRate()
	{
		return annualInterestRate;
	}

	void setAnnualInterestRate(double newAnnualInterestRate)
	{
		annualInterestRate = newAnnualInterestRate;
	}

	double getMonthlyInterestRate()
	{
		double monthlyInterestRate = annualInterestRate / 12.0;
		return monthlyInterestRate;
	}

	void withDraw(double amount)
	{
		balance -= amount;
	}

	void deposit(double amount)
	{
		balance += amount;
	}

private:
	int id;
	double balance;
	double annualInterestRate;
};

// 9.4
class MyPoint
{
public:
	MyPoint()
	{
		x = 0;
		y = 0;
	}

	MyPoint(double a, double b)
	{
		x = a;
		y = b;
	}

	double getX()
	{
		return x;
	}

	void setX(double newX)
	{
		x = newX;
	}

	double getY()
	{
		return y;
	}

	void setY(double newY)
	{
		y = newY;
	}

	double distance(double p, double q)
	{
		double distance = sqrt(pow(p - x, 2) + pow(q - y, 2));
		return distance;
	}

private:
	double x;
	double y;
};


int main()
{
	// 9.3
	Account account;
	account.getId();
	account.setId(1122);
	account.getBalance();
	account.setBalance(20000);
	account.getAnnualInterestRate();
	account.setAnnualInterestRate(4.5);

	account.withDraw(2500);
	account.deposit(3000);
	double currentMonthlyInterest = account.getBalance() * account.getMonthlyInterestRate();
	
	cout << "ÀÜ¾×: $" << account.getBalance() << endl;
	cout << "¿ù ÀÌÀÚ: $" << currentMonthlyInterest << endl << endl;

	// 9.4
	MyPoint p1;
	MyPoint p2(10, 30.5);

	cout << "Distance between (0, 0) and (10, 30.5) is " << p1.distance(p2.getX(), p2.getY()) << endl << endl;




	return 0;
}