#include <iostream>
using namespace std;

int main()
{
	// �ݾ��� �Է�
	cout << "Enter an amount in double, for example 11.56: ";
	double amount;
	cin >> amount;

	int remainingAmount = static_cast<int>(amount * 100);

	// 1�޷��� ���� ���
	int numberOfOneDollars = remainingAmount / 100;
	remainingAmount = remainingAmount % 100;

	// ���� �ݾ׿��� ���� ���
	int numberOfQuarters = remainingAmount / 25;
	remainingAmount = remainingAmount % 25;

	// ���� �ݾ׿��� ���� ���
	int numberOfDimes = remainingAmount / 10;
	remainingAmount = remainingAmount % 10;

	// ���� �ݾ׿��� ��� ���
	int numberOfNickles = remainingAmount / 5;
	remainingAmount = remainingAmount % 5;

	// ���� �ݾ׿��� ��� ���
	int numberOfPennies = remainingAmount;

	// ��� ȭ�� ǥ��
	cout << "Your amount " << amount << " consist of " << endl <<
		" " << numberOfOneDollars << " dollars" << endl <<
		" " << numberOfQuarters << " quarters" << endl <<
		" " << numberOfDimes << " dimes" << endl <<
		" " << numberOfNickles << " nickles" << endl <<
		" " << numberOfPennies << " pennies" << endl;

	return 0;
}