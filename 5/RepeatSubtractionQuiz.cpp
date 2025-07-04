#include <iostream>
#include <ctime> // time �Լ��� ���� ����
#include <cstdlib> // rand�� srand �Լ��� ���� ����
using namespace std;

int main()
{
	// 1. �� ������ ���� �ڸ� ���� �߻�
	srand(time(0));
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
	cout << "What is" << number1 << " - " << number2 << "? ";
	int answer;
	cin >> answer;

	// 4. �ùٸ� ���� �� ������ ����ڿ��� �ݺ������� ����
	while (number1 - number2 != answer)
	{
		cout << "Wrong answer. Try again. What is "
			<< number1 << " - " << number2 << "? ";
		cin >> answer;
	}

	cout << "You got it!" << endl;

	return 0;
}