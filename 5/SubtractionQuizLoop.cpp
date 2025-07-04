#include <iostream>
#include <ctime> // time 함수로 인해 삽입
#include <cstdlib> // rand와 srand 함수로 인해 삽입
using namespace std;

int main()
{
	int correctCount = 0; // 옳은 답의 수를 계산
	// int count = 0; // 질문의 수를 계산
	long startTime = time(0);
	// const int NUMBER_OF_QUESTIONS = 5;

	srand(time(0)); // 임의의 초기 값 설정

	// while (count < NUMBER_OF_QUESTIONS)
	char continueLoop = 'Y';
	while (continueLoop == 'Y')
	{
		// 1. 두 임의의 일의 자리 정수 발생
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
		cout << "What is " << number1 << " - " << number2 << "? ";
		int answer;
		cin >> answer;

		// 4. 답을 확인하고, 결과를 화면에 출력
		if (number1 - number2 == answer)
		{
			cout << "You are correct!\n";
			correctCount++;
		}
		else
			cout << "Your answer is wrong.\n" << number1 << " - " <<
			number2 << " should be " << (number1 - number2) << endl;

		// count를 증가
		// count++;

		// 사용자 확인
		cout << "Enter Y to continue and N to quit: ";
		cin >> continueLoop;
	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count is " << correctCount << "\nTest time is "
		<< testTime << " seconds\n";

	return 0;
}