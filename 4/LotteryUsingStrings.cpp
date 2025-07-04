#include <iostream>
#include <string> // ���ڿ��� ����ϱ� ���ؼ�
#include <ctime> // time �Լ��� ����ϱ� ���ؼ�
#include <cstdlib> // rand�� srand �Լ��� ����ϱ� ���ؼ�
using namespace std;

int main()
{
	string lottery;
	srand(time(0));
	int digit = rand() % 10; // ù ��° ���� ����
	lottery += static_cast<char>(digit + '0');
	digit = rand() % 10; // �� ��° ���� ����
	lottery += static_cast<char>(digit + '0');

	// ����ڰ� ������ ���� �Է�
	cout << "Enter your lottery pick (two digits): ";
	string guess;
	cin >> guess;

	cout << "The lottery number is " << lottery << endl;

	// �˻�
	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (guess[1] == lottery[0] && guess[0] == lottery[1])
		cout << "Match all digits: you win $3,000" << endl;
	else if (guess[0] == lottery[0]	|| guess[0] == lottery[1]
		|| guess[1] == lottery[0] || guess[1] == lottery[1])
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;

	return 0;
}