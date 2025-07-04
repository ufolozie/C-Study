#include <iostream>
#include <ctime> // time 함수로 인해 삽입
#include <cstdlib> // rand와 srand 함수로 인해 삽입
using namespace std;

int main()
{
	// 1. 두 임의의 일의 자리 정수 발생
	srand(time(0));
	int number1 = rand() % 10;
	int number2 = rand() % 10;

	// 2. number1 < number2라면 number1과 number2를 교환
	if (number1 < number2)
	{
		int temp = number1;
		number1 = number2;
		number2 = temp;
	}

	// 3. 학생에게 "what is number1 - number2?"의 답을 입력하도록 요청
	cout << "What is" << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;

	// 4. 올바른 답을 할 때까지 사용자에게 반복적으로 질문
	while (number1 - number2 != answer)
	{
		cout << "Wrong answer. Try again. What is "
			<< number1 << " - " << number2 << "? ";
		cin >> answer;
	}

	cout << "You got it!" << endl;

	return 0;
}