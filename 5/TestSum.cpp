#include <iostream>
using namespace std;

int main()
{
	// sum �ʱ�ȭ
	double sum = 0;

	/*// sum�� 0.01, 0.02, . . . , 0.99, 1 ���ϱ�
	for (double i = 0.01; i <= 1.0; i = i + 0.01)
		sum += i;*/

	double currentValue = 0.01;

	for (int count = 0; count < 100; count++)
	{
		sum += currentValue;
		currentValue += 0.01;
	}

	// ��� ���
	cout << "The sum is " << sum << endl;

	return 0;
}