#include <iostream>
using namespace std;

int main()
{
	// 금액을 입력
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	// 1달러의 수를 계산
	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	// 남은 금액에서 쿼터 계산
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	// 남은 금액에서 다임 계산
	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	// 남은 금액에서 페니 계산
	int numberOfNickles = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	// 남은 금액에서 페니 계산
	int numberOfPennies = remainingAmount;

	// 결과 화면 표시
	cout << "Your amount " << amount << " consist of " << endl <<
		" " << numberOfOneDollars << " dollars" << endl <<
		" " << numberOfQuarters << " quarters" << endl <<
		" " << numberOfDimes << " dimes" << endl <<
		" " << numberOfNickles << " nickles" << endl <<
		" " << numberOfPennies << " pennies" << endl;

	return 0;
}