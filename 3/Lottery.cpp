#include <iostream>
#include <ctime> // time 함수로 인해 삽입
#include <cstdlib> // rand와 srand 함수로 인해 삽입
using namespace std;

int main()
{
	// 복권 숫자 생성
	srand(time(0));
	int lottery = rand() % 100;

	// 사용자가 생각한 숫자 입력
	cout << "Enter your lottery pick (two digits): ";
	int guess;
	cin >> guess;
    
	// 복권의 각 숫자 지정
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;

	// 사용자가 생각한 각 숫자 지정
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;

	cout << "The lottery number is " << lottery << endl;

	// 사용자의 숫자 검사
	if (guess == lottery)
		cout << "Exact match: you win $10,000" << endl;
	else if (guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2)
		cout << "Match all digits: you win $3,000" << endl;
	else if (guessDigit1 == lotteryDigit1
		|| guessDigit1 == lotteryDigit2
		|| guessDigit2 == lotteryDigit1
		|| guessDigit2 == lotteryDigit2)
		cout << "Match one digit: you win $1,000" << endl;
	else
		cout << "Sorry, no match" << endl;

	return 0;
}
