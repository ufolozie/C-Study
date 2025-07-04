#include <iostream>
#include <iomanip>
#include "Loan.h"
using namespace std;

int main()
{
	// 연이율 입력
	cout << "Enter yearly interest rate, for example 8.25: ";
	double annualInterestRate;
	cin >> annualInterestRate;

	// 연도 입력
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	// 대출액 입력
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	// Loan 객체 생성
	Loan loan(annualInterestRate, numberOfYears, loanAmount);

	// 결과 출력
	cout << fixed << setprecision(2);
	cout << "The monthly payment is "
		<< loan.getMonthlyPayment() << endl;
	cout << "The total payment is " << loan.getTotalPayment() << endl;

	return 0;
}