#include <iostream>
#include <string> // 문자열을 사용하기 위해서
#include <ctime> // time 함수를 사용하기 위해서
#include <cstdlib> // rand와 srand 함수를 사용하기 위해서
using namespace std;

int main()
{
	string lottery;
	srand(time(0));
	int digit = rand() % 10; // 첫 번째 숫자 생성
	lottery += static_cast<char>(digit + '0');
	digit = rand() % 10; // 두 번째 숫자 생성
	lottery += static_cast<char>(digit + '0');

	// 사용자가 생각한 숫자 입력
	cout << "Enter your lottery pick (two digits): ";
	string guess;
	cin >> guess;

	cout << "The lottery number is " << lottery << endl;

	// 검사
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