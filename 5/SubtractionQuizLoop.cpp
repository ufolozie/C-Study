#include <iostream>
#include <ctime> // time �Լ��� ���� ����
#include <cstdlib> // rand�� srand �Լ��� ���� ����
using namespace std;

int main()
{
	int correctCount = 0; // ���� ���� ���� ���
	// int count = 0; // ������ ���� ���
	long startTime = time(0);
	// const int NUMBER_OF_QUESTIONS = 5;

	srand(time(0)); // ������ �ʱ� �� ����

	// while (count < NUMBER_OF_QUESTIONS)
	char continueLoop = 'Y';
	while (continueLoop == 'Y')
	{
		// 1. �� ������ ���� �ڸ� ���� �߻�
		int number1 = rand() % 10;
		int number2 = rand() % 10;

		// 2. number1 < number2��� number1�� number2�� ��ȯ
		if (number1 < number2)
		{
			int temp = number1;
			number1 = number2;
			number2 = temp;
		}

		// 3. �л����� "what is number1 - number2?"�� ���� �Է��ϵ��� ��û
		cout << "What is " << number1 << " - " << number2 << "? ";
		int answer;
		cin >> answer;

		// 4. ���� Ȯ���ϰ�, ����� ȭ�鿡 ���
		if (number1 - number2 == answer)
		{
			cout << "You are correct!\n";
			correctCount++;
		}
		else
			cout << "Your answer is wrong.\n" << number1 << " - " <<
			number2 << " should be " << (number1 - number2) << endl;

		// count�� ����
		// count++;

		// ����� Ȯ��
		cout << "Enter Y to continue and N to quit: ";
		cin >> continueLoop;
	}

	long endTime = time(0);
	long testTime = endTime - startTime;

	cout << "Correct count is " << correctCount << "\nTest time is "
		<< testTime << " seconds\n";

	return 0;
}