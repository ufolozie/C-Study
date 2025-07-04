#include <iostream>
#include <cstdlib>
#include <ctime> // time 함수로 인해 삽입
using namespace std;

int main()
{
	// 맞춰야 할 임의의 수 생성
	srand(time(0));
	int number = rand() % 101;

	cout << "Guess a magic number between 0 and 100";

	int guess = -1;
	while (guess != number)
	{
		// 사용자가 생각한 수 입력
		cout << "\nEnter your guess: ";
		cin >> guess;

		if (guess == number)
			cout << "Yes, the number is " << number << endl;
		else if (guess > number)
			cout << "Your guess is too high" << endl;
		else
			cout << "Your guess is too low" << endl;
	} // 반복문의 끝

	return 0;
}